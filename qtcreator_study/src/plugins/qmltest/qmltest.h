
#ifndef QmlTest_H
#define QmlTest_H

#include <QObject>
#include <QtPlugin>
#include <QAction>
#include <lib/pluginmanager/plugininterface.h>
#include "datawidget.h"

class TestClass;
class QmlTest : public QObject,
                public PluginInterface
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "QmlTest" FILE "plugin_info.json") // QT5.0 引入
    Q_INTERFACES(PluginInterface)
public:
    explicit QmlTest(QObject * parent = nullptr);
    virtual QString getname() override;
    virtual bool    init() override;
    virtual bool    clean() override;
public slots:
    void addTestClass();

private:
    QAction *    m_actionTestClass{nullptr}; // 按钮
    TestClass *  m_TestClass{nullptr};       // 类
    DataWidget * m_pDataWidget{nullptr};
};

#endif
