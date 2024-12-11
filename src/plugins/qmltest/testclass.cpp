#include "testclass.h"
#include <QQuickView>
#include <QQmlEngine>
#include <QQmlComponent>
#include <QWindow>

#include <QQmlApplicationEngine>
#include <QCoreApplication>

TestClass::TestClass(QObject * parent)
    : QObject(parent)
    , view(nullptr)
{
}

TestClass::~TestClass()
{
}

void TestClass::initialize()
{
    QQmlApplicationEngine engine;

    const QUrl url(QStringLiteral("qrc:/NewWindow.qml"));

    qmlRegisterType<QmlCpp>("QmlCppModel", 1, 0, "QmlCpp"); // 注册自定义类型

    engine.load(url); // 加载 QML 文件
}

void TestClass::openNewWindow()
{
}

void TestClass::changeDataSlot(QString str)
{
}
