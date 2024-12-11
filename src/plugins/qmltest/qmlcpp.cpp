#include "qmlcpp.h"

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
    setLineStr(var);
}
