#ifndef TESTCLASS_H
#define TESTCLASS_H

#include <QObject>
#include <QQuickView>
#include <QQmlContext>
#include "qmlcpp.h"
#include <QQmlApplicationEngine>
#include <QQmlEngine>
#include <QQmlComponent>
#include <QQuickView>
#include <QWindow>

#include <QCoreApplication>

class TestClass : public QObject
{
    Q_OBJECT
public:
    TestClass(QObject * parent = nullptr);
    ~TestClass();
    void initialize();

    Q_INVOKABLE void openNewWindow(); // 用于打开新窗口的函数
public slots:
    void changeDataSlot(QString str);

private:
    QQuickView * view;
    QmlCpp *     m_pQmlCpp;

    QQmlApplicationEngine engine;
};

#endif
