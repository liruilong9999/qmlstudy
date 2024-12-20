#ifndef DATAWIDGET_H
#define DATAWIDGET_H

#include <QWidget>

namespace Ui {
class DataWidget;
}

class DataWidget : public QWidget
{
    Q_OBJECT

public:
    explicit DataWidget(QWidget * parent = nullptr);
    ~DataWidget();

signals:
    void valueChangedSignal(QString var);

private slots:
    void on_pushButton_clicked();

private:
    Ui::DataWidget * ui;
};

#endif // DATAWIDGET_H
