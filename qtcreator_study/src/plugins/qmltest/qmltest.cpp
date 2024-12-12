#include <QDebug>
#include <lib/appskeleton/ipluginview.h>
#include <QAction>
#include <QLabel>
#include <QStatusBar>

#include <lib/leventbus/leventbus.h>
#include <lib/llog/llog.h>

#include <include_common/CircularQueue.h>

#include "qmltest.h"
#include "testclass.h"

QmlTest::QmlTest(QObject * parent)
    : QObject(parent)
{
}

QString QmlTest::getname()
{
    return QStringLiteral("插件A");
}

bool QmlTest::init()
{
    m_pDataWidget     = new DataWidget;
    m_TestClass       = new TestClass;
    m_actionTestClass = new QAction(QStringLiteral("按钮1"));
    if (m_actionTestClass)
    {
        connect(m_actionTestClass, &QAction::triggered, this, &QmlTest::addTestClass);
        IPluginView::getInstance().registerAction(QStringLiteral("qml"), QStringLiteral("qml测试"), m_actionTestClass);
    }
    return true;
}

bool QmlTest::clean()
{
    delete m_TestClass;
    m_TestClass = nullptr;
    delete m_pDataWidget;
    m_pDataWidget = nullptr;
    return true;
}

void QmlTest::addTestClass()
{
    m_pDataWidget->isHidden() ? m_pDataWidget->show() : m_pDataWidget->hide();
}
