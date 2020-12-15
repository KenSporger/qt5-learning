#include "mainwindow.h"
#include "pushButton.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    // 作为parent
    QWidget *window = new QWidget(0);
    window->resize(200, 200);
    window->show();
    // 作为子部件
    PushButton* push_button = new PushButton(window) ;
    push_button->show();

//    w.show();
    return a.exec();
}
