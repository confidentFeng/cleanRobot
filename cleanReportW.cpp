#include "cleanreportW.h"
#include "ui_cleanreportd.h"

CleanReportW::CleanReportW(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CleanReportW)
{
    ui->setupUi(this);

    // 初始化窗口
    init();
}

CleanReportW::~CleanReportW()
{
    delete ui;
}

// 初始化窗口
void CleanReportW::init()
{
    // 设置窗口无边框且窗口显示在最顶层
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::Tool | Qt::WindowStaysOnTopHint);

    // 滚动平滑
     ui->listWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
     ui->listWidget->setVerticalScrollMode(QListWidget::ScrollPerPixel);
     ui->listWidget->verticalScrollBar()->setSingleStep(10);
     // 设置滑动效果
     ui->listWidget->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
     ui->listWidget->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
     QScroller::grabGesture(ui->listWidget, QScroller::LeftMouseButtonGesture);

    ReadAllReport();
    AddListWigetItem();
}


// 获得所有清扫报告名字并按创建时间排序
void CleanReportW::ReadAllReport()
{
    QDir dir("../cleanRobot/image/cleanreportTXT");
    if(!dir.exists())
    {
        qDebug() <<QString::fromUtf8("未找到cleanreportTXT文件夹路径");
        return;
    }
    // 设置过滤（只获取文件和不获取link文件）
    dir.setFilter(QDir::Files | QDir::NoSymLinks);
    // 获取文件列表
    QFileInfoList fileList = dir.entryInfoList();
    // 获取文件数目并进行判断
    int file_count = fileList.count(); // 注意Linxu系统目录下有*~文件，也包括在内
    qDebug() <<"file_count: " <<fileList.count();
    if(file_count <= 0)
    {
       qDebug() <<QString::fromUtf8("cleanreportTXT文件夹中没有文件");
       return;
    }

    // 获取创建时间列表
    QList<QDateTime> fileTime;
    for(int i=0; i<fileList.count(); i++)
    {
        QFileInfo file_info = fileList.at(i);
        QString suffix = file_info.suffix(); // 获得文件后缀，即文件类型
        // 过滤出类型为".txt"的文件
        if(QString::compare(suffix, QString("txt"), Qt::CaseInsensitive) == 0)
        {
            // 获得TXT的创建时间列表
            fileTime.append(file_info.created());
        }
    }

    // 创建时间升序排序
    std::sort(fileTime.begin(), fileTime.end(), std::greater<QDateTime>());

    // 绝对路径排序
    for(int j=fileTime.count()-1; j>=0; j--)
    {
        for(int i=0; i < fileList.count(); i++)
        {
            QFileInfo file_info = fileList.at(i);
            if(fileTime.at(j) == file_info.created())
            {
                m_txtAbsPatch.append(fileList.at(j).absoluteFilePath());
                // qDebug()<<file_info.absoluteFilePath();
                break; // 避免重复添加创建时间相同的多个文件
            }
        }
    }

}

// 添加清扫报告项到列表中
void CleanReportW::AddListWigetItem()
{
    int totalTime = 0;
    double totalClean = 0;

    // 设置字体
    ui->totalCountLabel->setFont(QFont("宋体", 24, QFont::Bold));

    qDebug() <<"txtAbsPatch.count(): " <<m_txtAbsPatch.count();
    for(int i=m_txtAbsPatch.count()-1; i>=0; i--)
    {
        // 自定义item
        QWidget *itemwidget = new QWidget;
        QLabel  *itemlabel_statue = new QLabel(itemwidget);
        QLabel  *itemlabel_time = new QLabel(itemwidget);
        QLabel  *itemlabel_area = new QLabel(itemwidget);
        QLabel  *itemlabel_Details = new QLabel(itemwidget);
        QLabel  *itemlabel_return = new QLabel(itemwidget);

        QString aera_ci;
        QListWidgetItem *item = new QListWidgetItem(ui->listWidget);

        QFile file(m_txtAbsPatch.at(i));
        file.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream out(&file);
        for(int i=0; i<=3; i++)
        {
            switch (i)
            {
                case 0:// 状态
                {
                    // 设置颜色
                    itemlabel_statue->setFont(QFont("宋体", 20, QFont::Bold));
                    itemlabel_statue->setText( out.readLine());
                    itemlabel_statue->setGeometry(30, 25, 100, 40);
                    itemlabel_statue->setStyleSheet("color: rgb(80, 255, 255);");
                    break;
                }
                case 1:// 时间
                {
                    itemlabel_time->setFont(QFont("宋体", 20, QFont::Normal));
                    itemlabel_time->setText( out.readLine());
                    itemlabel_time->setGeometry(225, 10, 300, 40);
                    break;
                }
                case 2:// 清扫面积
                {
                    QString strClean = out.readLine();
                    aera_ci = "清扫" + strClean+"㎡ " + "· ";
                    totalClean += strClean.toDouble();
                    break;
                }
                case 3:// 清扫时间
                {
                    QString strTime = out.readLine();
                    itemlabel_area->setFont(QFont("宋体", 16, QFont::Normal));
                    itemlabel_area->setText(aera_ci+"工作"+strTime+"min");
                    itemlabel_area->setGeometry(225, 45, 250, 40);
                    totalTime += strTime.toInt();
                    break;
                }
                default:break;
            }
        }

        itemlabel_Details->setFont(QFont("宋体", 20, QFont::Normal));
        itemlabel_Details->setText("详情");
        itemlabel_Details->setGeometry(640, 25, 70, 40);

        itemlabel_return->setStyleSheet("QLabel{border-image: url(:/new/prefix1/image/cleanrportimag/Details.png);}");
        itemlabel_return->setGeometry(720, 30, 17, 29);

        item->setSizeHint(QSize(100, 90));
        ui->listWidget->addItem(item);
        ui->listWidget->setItemWidget(item, itemwidget);

        file.close();
    }

    ui->totalTimeLabel->setText(QString::number(totalTime));// 设置总清扫时间
    ui->totalCleanLabel->setText(QString::number(totalClean));// 设置总清扫面积
    ui->totalCountLabel->setText(QString::number(m_txtAbsPatch.count()));// 设置总次数
}

// ----------------------------slots-------------------------------------------------

// 返回更多窗口按钮-点击槽函数
void CleanReportW::on_returnMoreButton_clicked()
{
    emit doProseShowMoreW();
    this->close();
}
