#include "mainwindow.h"
#include <QLabel>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QLabel* label = new QLabel(&w);
    label->setText("Hello World! 你好Qt.");
    label->resize(200, 20);
    label->move(250, 250);
    w.show();
    // 程序进入消息循环
    return a.exec();
}
