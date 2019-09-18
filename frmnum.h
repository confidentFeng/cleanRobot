/*
* Copyright (c) 2019,浙江智澜科技有限公司
* All rights reserved.
*
* 摘 要：实现"虚拟小键盘"功能，点击任何"输入栏"窗口部件即可弹出，可以触摸点击9位数字键实现输入数字功能
*
* 当前版本：1.1
* 作 者：聂咸丰
* 完成日期：2019 年 6 月 28 日
*
* 取代版本：1.0
* 作 者：张雪平
* 完成日期：2019 年 5 月 12 日
*/
#ifndef FRMNUM_H
#define FRMNUM_H

#include <QWidget>
#include <QLineEdit>
#include <QComboBox>
#include <QTextEdit>
#include <QPlainTextEdit>
#include <QTextBrowser>
#include <QPushButton>
#include <QTimer>
#include <QEvent>
#include <QKeyEvent>

namespace Ui
{
    class frmNum;
}

class frmNum : public QWidget
{
    Q_OBJECT

public:
    explicit frmNum(QWidget *parent =nullptr);
    ~frmNum();

    // 单例模式,保证一个程序只存在一个输入法实例对象
    static frmNum *Instance()
    {
        if (!_instance)
        {
            _instance = new frmNum;
        }
        return _instance;
    }

    void Init(QString style, int fontSize);  // 初始化窗口,包括字体大小

protected:
    // 事件过滤器：处理鼠标按下弹出小键盘
    bool eventFilter(QObject *obj, QEvent *event);

private slots:
    // 焦点改变事件槽函数处理
    void focusChanged(QWidget *oldWidget, QWidget *nowWidget);
    // 小键盘按键处理槽函数
    void btn_clicked();
    // 改变小键盘样式
    void changeStyle(QString topColor, QString bottomColor,
                     QString borderColor, QString textColor);
    // 定时器处理退格键
    void reClicked();

private:
    Ui::frmNum *ui;

    static frmNum *_instance;       // 实例对象

    QPushButton *m_btnPress;          // 长按按钮
    QTimer *m_backBtnTimert;          // 退格键定时器
    QWidget *m_currentWidget;         // 当前焦点的对象
    QLineEdit *m_currentLineEdit;     // 当前焦点的单行文本框

    QString m_currentEditType;        // 当前焦点控件的类型
    QString m_currentStyle;           // 当前小键盘样式
    int m_currentFontSize;            // 当前输入法面板字体大小
    bool m_isPressBackBtn;            // 是否长按退格键
    bool m_isFirst;                   // 是否首次加载

    bool checkPress();              // 校验当前长按的按钮// 初始化属性
    void ChangeStyle(QString m_currentStyle);             // 改变样式
    void insertValue(QString value);// 插入值到当前焦点控件
    void deleteValue();             // 删除当前焦点控件的一个字符
    void clearValue();             // clear当前焦点控件的一个字符
};

#endif //  FRMNUM_H
