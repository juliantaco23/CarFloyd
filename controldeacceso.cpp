#include "controldeacceso.h"
#include "ui_controldeacceso.h"

controldeacceso::controldeacceso(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::controldeacceso)
{
    ui->setupUi(this);
}

controldeacceso::~controldeacceso()
{
    delete ui;
}

void controldeacceso::on_registro_clicked()
{

}
