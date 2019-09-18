#include "frmnum.h"
#include "ui_frmnum.h"
#include <QShortcut>
#include <QDebug>

frmNum *frmNum::_instance = nullptr;

frmNum::frmNum(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::frmNum)
{
    ui->setupUi(this);

    // 初始化窗口
    Init("black",20); // 黑色，字体大小为20px

    ui->btnClear->setFocus();
    ui->btnClear->setShortcut(QKeySequence::InsertParagraphSeparator);
    ui->btnClear->setShortcut(Qt::Key_Enter);
    ui->btnClear->setShortcut(Qt::Key_Return);
}

frmNum::~frmNum()
{
    delete ui;
}

// 初始化窗口,包括字体大小
void frmNum::Init(QString style, int fontSize)
{
    // 设置窗口无边框且窗口显示在最顶层
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::Tool | Qt::WindowStaysOnTopHint);

    m_isFirst = true; // 是否首次加载
    m_isPressBackBtn = false; // 是否长按退格键
    // 退格键定时器
    m_backBtnTimert = new QTimer(this);
    connect(m_backBtnTimert, SIGNAL(timeout()), this, SLOT(reClicked()));
    m_currentWidget = nullptr;// 当前焦点的对象

    // 输入法面板字体大小,如果需要更改面板字体大小,该这里即可
    this->m_currentFontSize = fontSize;

    // 如果需要更改输入法面板的样式,改变style这个形式参数即可
    // blue--淡蓝色  dev--dev风格  black--黑色  brown--灰黑色  lightgray--浅灰色  darkgray--深灰色  gray--灰色  silvery--银色
    this->ChangeStyle(style);

    // 初始化小键盘上各按键属性
    ui->btn0->setProperty("btnNum", true);
    ui->btn1->setProperty("btnNum", true);
    ui->btn2->setProperty("btnNum", true);
    ui->btn3->setProperty("btnNum", true);
    ui->btn4->setProperty("btnNum", true);
    ui->btn5->setProperty("btnNum", true);
    ui->btn6->setProperty("btnNum", true);
    ui->btn7->setProperty("btnNum", true);
    ui->btn8->setProperty("btnNum", true);
    ui->btn9->setProperty("btnNum", true);
    ui->btnDelete->setProperty("btnOther", true);

    // 链接小键盘上各数字键与功能键的点击信号到点击槽函数上
    QList<QPushButton *> btn = this->findChildren<QPushButton *>();
    foreach (QPushButton * b, btn)
    {
        connect(b, SIGNAL(clicked()), this, SLOT(btn_clicked()));
    }

    // 绑定全局改变焦点信号槽
    connect(qApp, SIGNAL(focusChanged(QWidget *, QWidget *)),
            this, SLOT(focusChanged(QWidget *, QWidget *)));

    // 绑定按键事件过滤器
    qApp->installEventFilter(this);
}

void frmNum::focusChanged(QWidget *oldWidget, QWidget *nowWidget)
{
    // qDebug() << "oldWidget:" << oldWidget << " nowWidget:" << nowWidget;
    if (nowWidget != nullptr && !this->isAncestorOf(nowWidget))
    {
        /*在Qt5和linux系统中(嵌入式linux除外),当输入法面板关闭时,焦点会变成无,然后焦点会再次移到焦点控件处
        这样导致输入法面板的关闭按钮不起作用,关闭后马上有控件获取焦点又显示.
        为此,增加判断,当焦点是从有对象转为无对象再转为有对象时不要显示.
        这里又要多一个判断,万一首个窗体的第一个焦点就是落在可输入的对象中,则要过滤掉*/

        #ifndef __arm__
                if (oldWidget == nullptr && !m_isFirst)
                {
                    return;
                }
        #endif

        m_isFirst = false;
        if (nowWidget->inherits("QLineEdit"))
        {
            m_currentLineEdit = static_cast<QLineEdit *>(nowWidget);
            m_currentEditType = "QLineEdit";
            this->setVisible(true);
        }
        else
        {
            m_currentWidget = nullptr;
            m_currentLineEdit = nullptr;
            m_currentEditType = "";
            this->setVisible(false);
        }

        QRect rect = nowWidget->rect();
        QPoint pos = QPoint(rect.left(), rect.bottom() + 2);
        pos = nowWidget->mapToGlobal(pos);
        this->setGeometry(pos.x(), pos.y(), this->width(), this->height());
    }

    Q_UNUSED(oldWidget);// 未使用参数
}

// 事件过滤器：处理鼠标按下弹出小键盘
bool frmNum::eventFilter(QObject *obj, QEvent *event)
{
    if (event->type() == QEvent::MouseButtonPress)
    {
        // 确保每次点击输入栏都弹出虚拟键盘
        if (m_currentEditType == "QLineEdit")
        {
            if (obj != ui->btnClear)
            {
                this->setVisible(true);
            }
            m_btnPress = static_cast<QPushButton *>(obj);

            if (checkPress())
            {
                m_isPressBackBtn = true;
                m_backBtnTimert->start(500);
            }
        }

        return false;
    }
    else if (event->type() == QEvent::MouseButtonRelease)
    {
        m_btnPress = static_cast<QPushButton *>(obj);

        if (checkPress())
        {
            m_isPressBackBtn = false;
            m_backBtnTimert->stop();
        }

        return false;
    }

    return QWidget::eventFilter(obj, event);
}

// 校验当前长按的按钮
bool frmNum::checkPress()
{
    // 只有属于数字键盘的合法按钮才继续处理
    bool num_ok = m_btnPress->property("btnNum").toBool();
    bool other_ok = m_btnPress->property("btnOther").toBool();
    if (num_ok || other_ok)
    {
        return true;
    }

    return false;
}

// 定时器处理退格键
void frmNum::reClicked()
{
    if (m_isPressBackBtn)
    {
        m_backBtnTimert->setInterval(30);
        m_btnPress->click();
    }
}

// 小键盘按键处理槽函数
void frmNum::btn_clicked()
{
    // 如果当前焦点控件类型为空,则返回不需要继续处理
    if (m_currentEditType == "")
    {
        return;
    }

    QPushButton *btn = static_cast<QPushButton *>(sender());
    QString objectName = btn->objectName();
    if (objectName == "btnDelete")
    {
        this->deleteValue();
    }
    else if (objectName == "btnClear")
    {
        this->clearValue();
    }
    else
    {
        QString value = btn->text();
        this->insertValue(value);
    }
}

// 插入值到当前焦点控件
void frmNum::insertValue(QString value)
{
    if (m_currentEditType == "QLineEdit")
    {
        m_currentLineEdit->insert(value);
    }
}

// 删除当前焦点控件的一个字符
void frmNum::deleteValue()
{
    if (m_currentEditType == "QLineEdit")
    {
        m_currentLineEdit->backspace();
    }
}

// 清空当前焦点控件的所有字符
void frmNum::clearValue()
{
    if (m_currentEditType == "QLineEdit")
    {
        m_currentLineEdit->clear();
    }
}

// 改变样式
void frmNum::ChangeStyle(QString currentStyle)
{
    if (currentStyle == "blue")
    {
        changeStyle("#DEF0FE", "#C0DEF6", "#C0DCF2", "#386487");
    }
    else if (currentStyle == "dev")
    {
        changeStyle("#C0D3EB", "#BCCFE7", "#B4C2D7", "#324C6C");
    }
    else if (currentStyle == "gray")
    {
        changeStyle("#E4E4E4", "#A2A2A2", "#A9A9A9", "#000000");
    }
    else if (currentStyle == "lightgray")
    {
        changeStyle("#EEEEEE", "#E5E5E5", "#D4D0C8", "#6F6F6F");
    }
    else if (currentStyle == "darkgray")
    {
        changeStyle("#D8D9DE", "#C8C8D0", "#A9ACB5", "#5D5C6C");
    }
    else if (currentStyle == "black")
    {
        changeStyle("#4D4D4D", "#292929", "#D9D9D9", "#CACAD0");
    }
    else if (currentStyle == "brown")
    {
        changeStyle("#667481", "#566373", "#C2CCD8", "#E7ECF0");
    }
    else if (currentStyle == "silvery")
    {
        changeStyle("#E1E4E6", "#CCD3D9", "#B2B6B9", "#000000");
    }
}

// 改变小键盘样式
void frmNum::changeStyle(QString topColor, QString bottomColor, QString borderColor, QString textColor)
{
    QStringList qss;
    qss.append(QString("QWidget#frmNum{background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 %1,stop:1 %2);}")
               .arg(topColor).arg(bottomColor));
    qss.append("QPushButton{padding:5px;border-radius:3px;}");
    qss.append(QString("QPushButton:hover{background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 %1,stop:1 %2);}")
               .arg(topColor).arg(bottomColor));
    qss.append(QString("QLabel,QPushButton{font-size:%1pt;color:%2;}")
               .arg(m_currentFontSize).arg(textColor));
    qss.append(QString("QPushButton#btnPre,QPushButton#btnNext,QPushButton#btnClose{padding:5px;}"));
    qss.append(QString("QPushButton{border:1px solid %1;}")
               .arg(borderColor));
    qss.append(QString("QLineEdit{border:1px solid %1;border-radius:5px;padding:2px;background:none;selection-background-color:%2;selection-color:%3;}")
               .arg(borderColor).arg(bottomColor).arg(topColor));
    this->setStyleSheet(qss.join(""));
}
