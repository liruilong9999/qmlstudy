#include "testclass.h"

TestClass::TestClass(QObject * parent)
    : QObject(parent)
    , view(nullptr)
{
    initialize();
}

TestClass::~TestClass()
{
}

void TestClass::initialize()
{
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
