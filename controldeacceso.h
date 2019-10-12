#ifndef CONTROLDEACCESO_H
#define CONTROLDEACCESO_H

#include <QWidget>

namespace Ui {
class controldeacceso;
}

class controldeacceso : public QWidget
{
    Q_OBJECT

public:
    explicit controldeacceso(QWidget *parent = nullptr);
    ~controldeacceso();

private slots:
    void on_registro_clicked();

private:
    Ui::controldeacceso *ui;
};

#endif // CONTROLDEACCESO_H
