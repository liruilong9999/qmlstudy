#include "datawidget.h"
#include "ui_datawidget.h"

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
    emit valueChangedSignal(ui->lineEdit->text());
}
