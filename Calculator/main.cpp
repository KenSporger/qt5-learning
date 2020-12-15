#include "calculatordialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // 通mainWindow，也是创建了一个窗口实例
    CalculatorDialog dialog;
    dialog.show();
    return a.exec();
}
