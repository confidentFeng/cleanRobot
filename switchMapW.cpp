#include "switchMapW.h"
#include "ui_switchmapd.h"

SwitchMapW::SwitchMapW(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SwitchMapW)
{
    ui->setupUi(this);
    init();
}

SwitchMapW::~SwitchMapW()
{
    delete ui;
}

// 初始化窗口
void SwitchMapW::init()
{
    // 设置窗口无边框且窗口显示在最顶层
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::Tool | Qt::WindowStaysOnTopHint);

    // 关闭横竖滚动条
    ui->listWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->listWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    // 滚动平滑
    ui->listWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->listWidget->setVerticalScrollMode(QListWidget::ScrollPerPixel);
    ui->listWidget->verticalScrollBar()->setSingleStep(10);

    m_myswitchmapdd=new SwitchMapShowW(this);
    connect(this, SIGNAL(doProssSendMapPath(QString)), m_myswitchmapdd, SLOT(RrciveMapPath(QString)));

    // 设置滑动效果
    ui->listWidget->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
    ui->listWidget->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
    QScroller::grabGesture(ui->listWidget, QScroller::LeftMouseButtonGesture);

    // 获得所有地图名字和路径
    ReadAllMap();
    // 添加item
    AddItemMap();
    // 设置默认地图序号（若未找到文件路径，则mapName.count()为0，则.at(-1)会导致QList越界）
    if(m_mapName.count() == 0)
       ui->currentMapLabel->setText(" ");
    else
       ui->currentMapLabel->setText(m_mapName.at(m_mapName.count()-1));
    // 把index添加进队列尾部
    m_queuemap.enqueue(m_mapName.count()-1);
    // 连接信号
    connect(m_myswitchmapdd, SIGNAL(doProcessSendMapOK()), this, SLOT(doProcessReciverMapOk()));
}

// 获得所有地图名字并按创建时间排序
void SwitchMapW::ReadAllMap()
{
    // 获得map文件夹的路径
    QString path = "./image/map";
    // QString path = "../cleanRobot/image/map";
    QDir dir(path);
    if(!dir.exists())
    {
        qDebug()<<QString::fromUtf8("未找到map文件夹路径");
        return;
    }
    // 设置过滤
    dir.setFilter(QDir::Files | QDir::NoSymLinks);

    // entryInfoList()返回一个QFileInfoList对象，包含当前目录下的所有文件和子目录。
    QFileInfoList fileList = dir.entryInfoList();
    // 获得当前目录下的文件数目
    int file_count = fileList.count();
    if(file_count <= 0)
    {
       qDebug()<<QString::fromUtf8("map文件夹中没有地图文件");
       return;
    }
    // 获得当前目录下各png图片文件的创建时间列表
    QList<QDateTime> creTimeList;
    for(int i=0; i<fileList.count(); i++)
    {
        QFileInfo file_info = fileList.at(i);
        QString suffix = file_info.suffix();
        // 过滤文件
        if(QString::compare(suffix, QString("png"), Qt::CaseInsensitive) == 0)
        {
            creTimeList.append(file_info.created());
        }
    }

    // 创建时间升序排序
    std::sort(creTimeList.begin(), creTimeList.end(), std::greater<QDateTime>());
    // 绝对路径排序
    for(int i=creTimeList.count()-1; i>=0; i--)
    {
        for(int j=0; j < fileList.count(); j++)
        {
            if(creTimeList.at(i) == fileList.at(j).created()) //"升序后列表的创建时间"与"原本列表的创建时间"进行对比
            {
                // 绝对路径
                m_mapAbsPatch.append(fileList.at(j).absoluteFilePath());
                // 创建时间
                m_mapCreatTime.append(fileList.at(j).created());
                // 地图名字
                m_mapName.append(fileList.at(j).baseName());
                break; // 避免重复添加创建时间相同的多个文件
            }
        }
    }
}

// 添加地图item到列表
void SwitchMapW::AddItemMap()
{
    qDebug() <<"m_mapName.count() " <<m_mapName.count();
    for(int i=m_mapName.count()-1; i>=0; i--)
    {
        // 自定义item
        QWidget *itemwidget = new QWidget;
        QLabel  *itemlabel_name = new QLabel(itemwidget);
        QLabel  *itemlabel_time = new QLabel(itemwidget);
        QLabel  *itemlabel_map = new QLabel(itemwidget);
        QListWidgetItem *item = new QListWidgetItem(ui->listWidget);
        // 转化时间格式
        QString creator_time = m_mapCreatTime.at(i).toString("yyyy-MM-dd  hh:mm:ss");
        QString str = QString::fromUtf8("  地图：") + m_mapName.at(i);

        // 设置label显示位置
        itemlabel_map->setGeometry(30, 16, 24, 28);
        itemlabel_map->setStyleSheet("QLabel{border-image: url(:/new/prefix1/image/switchmapimag/mapicon.png);}");

        itemlabel_name->setText(str);
        itemlabel_name->setGeometry(80, 10, 300, 40);

        itemlabel_time->setText(creator_time);
        itemlabel_time->setGeometry(600, 10, 350, 40);
        item->setSizeHint(QSize(100, 60));
        ui->listWidget->addItem(item);
        ui->listWidget->setItemWidget(item, itemwidget);
    }
}

// ---------------------slots-----------------------------------------------

// 返回更多窗口按钮-点击槽函数
void SwitchMapW::on_returnMoreButton_clicked()
{
    emit doProseShowMoreW();
    this->close();
}

// 地图栏项目按钮-点击槽函数
void SwitchMapW::on_listWidget_clicked(const QModelIndex &index)
{
    m_myswitchmapdd->show();
    // 发送绝对路径，----倒叙

    m_mapNameIndex = m_mapAbsPatch.count() - 1 - index.row();
    emit doProssSendMapPath(m_mapAbsPatch.at(m_mapNameIndex));
}

// 撤回地图按钮-点击槽函数
void SwitchMapW::on_returnMapButton_clicked()
{
    // 队列不为空
    if(!m_queuemap.isEmpty())
    {
        // 如果当前地图是现在这个地图，则删除这个现实下一个
        if(m_mapNameIndex==m_queuemap.last() && m_queuemap.size()>1)
        {
            m_queuemap.removeLast();
        }
        ui->currentMapLabel->setText(m_mapName.at(m_queuemap.last()));
        // 防止不能反回到最初状态
        if(m_queuemap.size() > 1)
        {
            m_queuemap.removeLast();
        }
    }
}

// 预览地图窗口的确定按钮按下信号对应槽函数
void SwitchMapW::doProcessReciverMapOk()
{
    // 预览点下了确定按钮-切换地图包
    ui->currentMapLabel->setText(m_mapName.at(m_mapNameIndex));
    // 把index添加进队列尾部
    m_queuemap.enqueue(m_mapNameIndex);
}
