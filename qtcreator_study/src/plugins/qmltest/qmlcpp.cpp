#include "qmlcpp.h"
#include <lib/leventbus/leventbus.h>
#include <QDebug>

QmlCpp::QmlCpp(QObject * obj)
    : QObject(obj)
    , m_lineStr("xxxx")
{
    qDebug() << 11111111111;
    LEventBus::getInstance()->subscribe("changeData_topic", [=](const QVariant & var) {
        changeValue(var.toString());
    });
}

QString QmlCpp::lineStr()
{
    return m_lineStr;
}

void QmlCpp::setLineStr(QString str)
{
    m_lineStr = str;
    emit lineStrChanged(str);
}

void QmlCpp::changeValue(QString var)
{
    qDebug() << var;
    setLineStr(var);
}
