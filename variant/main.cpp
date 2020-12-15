#include <QCoreApplication>
#include <QVariant>
#include <QMap>
#include <QList>
#include <QDebug>
#include <QColor>

void variantTest()
{
    QVariant vInt(10);
    qDebug() << vInt.toInt();

    QVariant vStr("Hello World!");
    qDebug() << vStr.toString();

    QMap<QString, QVariant> map;
    map["int"] = 10;
    map["str"] = "Hello World!";
    map["double"] = 10.1;
    map["color"] = QColor(255, 0, 0);
    // QVariant显示使用转换函数来获得相应值，如果不转换将打印QVariant对象
    qDebug() << map["int"] << map["int"].toInt();
    qDebug() << map["str"] << map["str"].toString();
    qDebug() << map["double"] << map["double"].toDouble();
    // 没有toColor()，所以用.value<QColor>()进行转换（类似于类型强转）
    qDebug() << map["color"] << map["color"].value<QColor>();
    QStringList list;
    list  << "A" << "B";
    // QVariant甚至可以是list
    QVariant vList(list);
    if (vList.type() == QVariant::StringList)
    {
        QStringList temp = vList.toStringList();
        for (int i = 0; i < temp.size(); i++)
            qDebug() << temp[i];
    }

}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    variantTest();
    return a.exec();
}
