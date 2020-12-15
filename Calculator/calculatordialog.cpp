#include "calculatordialog.h"
#include <QGridLayout>

const static double PI = 3.141592;

CalculatorDialog::CalculatorDialog(QWidget *parent)
    :QDialog(parent) // 调用父类构造
{
    // 传入QDialog窗口对象
    label1 = new QLabel(this);
    label2 = new QLabel(this);
    lineEdit = new QLineEdit(this);
    button = new QPushButton(this);

    label1->setText(tr("请输入圆的半径： "));
    button->setText(tr("计算圆的半径： "));

    // 布局管理器，将所有控件位置固定
    QGridLayout *mainLayout = new QGridLayout(this);
    mainLayout->addWidget(label1, 0, 0);
    mainLayout->addWidget(label2, 1, 0);
    mainLayout->addWidget(lineEdit, 0, 1);
    mainLayout->addWidget(button, 1, 1);

    // 信号槽连接
    // 按下button计算
//    connect(button, SIGNAL(clicked()), this, SLOT(showArea()));
    // 实时计算
    // 信号来自于对象lineEdit，槽来自于对象this，showArea负责响应信号textChanged
    // SIGNAL和SLOT都是#宏定义，返回标识符的字符串形式
    connect(lineEdit, SIGNAL(textChanged(QString)), this, SLOT(showArea()));
    // 等价于
//    connect(lineEdit, "textChanged(QString)", this, "showArea()");
}

void CalculatorDialog::showArea()
{
    bool ok;
    QString tempStr;
    // 获取输入框字符
    QString radiusStr = lineEdit->text();
    // 字符串转数字
    int radius = radiusStr.toInt(&ok);
    double area = radius * radius * PI;
    label2->setText(tempStr.setNum(area));

}
