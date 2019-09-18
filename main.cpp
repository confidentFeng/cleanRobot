#include "mainW.h"
#include "frmnum.h"
#include <QApplication>
#include "globalApplication.h"
#include "loadingW.h"

int main(int argc, char *argv[])
{
    GlobalApplication a(argc, argv);

    MainW w; // 主窗口实例
    frmNum::Instance();// set brown--灰黑色
    w.show(); // 显示主窗口
    // w.Lockfrom(); // 主窗口中显示锁屏界面

//    LoadingWidget loadingWin;
//    loadingWin.show();
//    loadingWin.showMain();

    return a.exec();
}
