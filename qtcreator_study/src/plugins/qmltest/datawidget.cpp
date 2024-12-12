#include "datawidget.h"
#include "ui_datawidget.h"

#include <lib/leventbus/leventbus.h>

DataWidget::DataWidget(QWidget * parent)
    : QWidget(parent)
    , ui(new Ui::DataWidget)
{
    ui->setupUi(this);
}

DataWidget::~DataWidget()
{
    delete ui;
}

void DataWidget::on_pushButton_clicked()
{
    QVariant var(ui->lineEdit->text());
    LEventBus::getInstance()->publish("changeData_topic", var);
}
