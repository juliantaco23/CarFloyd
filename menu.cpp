#include "menu.h"
#include "ui_menu.h"


Menu::Menu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);
    scene = new QGraphicsScene(0,0,1152,648);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setSceneRect(scene->sceneRect());
    ui->graphicsView->setBackgroundBrush(QImage(":/Imagenes/bugymontanas.jpg"));
    ui->graphicsView->show();
    ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    read=new instrucciones;
    intro=new Seleccion;

}

Menu::~Menu()
{
    delete ui;
}

void Menu::on_Unjugador_clicked()
{
    intro->showMaximized();
    this->close();
}

void Menu::on_Multijugador_clicked()
{
    intro->showMaximized();
    this->close();
}

void Menu::on_Instrucciones_clicked()
{
    read->showMaximized();
    this->close();
}

void Menu::on_Salir_clicked()
{
    this->close();
}

void Menu::on_leaderboards_clicked()
{

}
