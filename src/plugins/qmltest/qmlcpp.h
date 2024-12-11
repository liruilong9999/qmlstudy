#ifndef QMLCPP_H
#define QMLCPP_H

#include <QObject>

class QmlCpp : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString lineStr READ lineStr WRITE setLineStr NOTIFY lineStrChanged)
public:
    QString lineStr();
    void    setLineStr(QString str);

public slots:
    void changeValue(QString var);

signals:
    void lineStrChanged(QString str);

private:
    QString m_lineStr;
};

#endif // QMLCPP_H
