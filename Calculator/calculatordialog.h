#ifndef CALCULATORDIALOG_H
#define CALCULATORDIALOG_H

#include <QMainWindow>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QDialog>

class CalculatorDialog : public QDialog
{
    // 启动Qt元对象系统的一些特性（如信号槽），放置到类定义私有区
    Q_OBJECT
public:
    CalculatorDialog(QWidget *parent = 0);

private:
    QLabel *label1, *label2;
    QLineEdit *lineEdit;
    QPushButton *button;

private slots:
    void showArea();

};

#endif // CALCULATORDIALOG_H
