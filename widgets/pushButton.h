#ifndef _PUSH_BUTTON_H
#define _PUSH_BUTTON_H

#include<QWidget>

class PushButton : public QWidget
{
    Q_OBJECT

public:
    // parent=0,则创建的部件将是一个窗口,否则将是parent的子部件
    PushButton(QWidget* parent = 0);
    ~PushButton(){};
};

#endif
