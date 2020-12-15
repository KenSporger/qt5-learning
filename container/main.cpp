#include <QCoreApplication>
#include <QList>
#include <QDebug>

void listTest()
{
    // QList支持int double QString QDate Qtime
    // 但是不支持QWidget,但可以支持QWidget*
    QList<QString> list1;
    {
        QString str = "Hello World!";
        list1 << str;
    }
    qDebug() << list1[0];
}

// STL迭代风格
void iteratorTest()
{
    QList<int> list1;

    for(int i = 0; i < 5; i++)
        list1.append(i);

    QList<int>::iterator iter1;
    for(iter1=list1.begin(); iter1 != list1.end(); iter1++)
    {
        qDebug() << *iter1;
        *iter1 *= 2;
    }

    QList<int>::const_iterator citer;
    for(citer=list1.constBegin(); citer != list1.constEnd(); citer++)
    {
        qDebug() << *citer;
    }

    for (int i = 0; i < list1.size(); i++)
        list1[i] = 0;

}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    listTest();
    iteratorTest();
    return a.exec();
}
