#include "seleccion.h"
#include "ui_seleccion.h"

Seleccion::Seleccion(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Seleccion)
{
    ui->setupUi(this);
}

Seleccion::~Seleccion()
{
    delete ui;
}


void Seleccion::on_mario_clicked()
{
    imagen=1;
}

void Seleccion::on_luigi_clicked()
{
    imagen=2;
}

void Seleccion::on_yoshi_clicked()
{
    imagen=3;
}

void Seleccion::on_donkey_clicked()
{
    imagen=4;
}

void Seleccion::on_peach_clicked()
{
    imagen=5;
}

void Seleccion::on_daisy_clicked()
{
    imagen=6;
}

void Seleccion::on_bowser_clicked()
{
    imagen=7;
}

void Seleccion::on_toad_clicked()
{
    imagen=8;
}

void Seleccion::on_koopa_clicked()
{
    imagen=9;
}

void Seleccion::on_boo_clicked()
{
    imagen=10;
}

void Seleccion::on_paleta_clicked()
{
    imagen=11;
}

void Seleccion::on_darkmario_clicked()
{
    imagen=12;
}

void Seleccion::on_babymario_clicked()
{
    imagen=13;
}

void Seleccion::on_babyluigi_clicked()
{
    imagen=14;
}

void Seleccion::on_babybowser_clicked()
{
    imagen=15;
}

void Seleccion::on_wario_clicked()
{
    imagen=16;
}

void Seleccion::on_waluigi_clicked()
{
    imagen=17;
}

void Seleccion::on_darkbowser_clicked()
{
    imagen=18;
}

void Seleccion::on_gaytoad_clicked()
{
    imagen=19;
}

void Seleccion::on_gaykoopa_clicked()
{
    imagen=20;
}

void Seleccion::on_koopa2_clicked()
{
    imagen=21;
}

void Seleccion::on_koopa3_clicked()
{
    imagen=22;
}

void Seleccion::on_koopa4_clicked()
{
    imagen=23;

}

void Seleccion::on_simio_clicked()
{
    imagen=24;
}

void Seleccion::on_pushButton_clicked()
{
    nivel=1;
    juego=new MainWindow(imagen,nivel);
    juego->showMaximized();
    this->close();
}
