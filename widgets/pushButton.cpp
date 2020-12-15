#include "pushButton.h"
#include <QPushButton>
#include <QApplication>

PushButton::PushButton(QWidget *parent)
    :QWidget(parent)
{
    // parent窗口大小
    setMinimumSize(200, 120);
    // 或者可以使用setGeometry设置parent的位置和大小
//    setGeometry(62, 40, 175, 130);
    QPushButton* button = new QPushButton("quit", this);
    // qApp宏定义，返回一个单例，即main中创建的QApplication
    connect(button, SIGNAL(clicked()), qApp, SLOT(quit()));
    button->setGeometry(62, 40, 75, 30);
}
