#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "hill.h"
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QMainWindow>
#include <QTimer>
#include "carrografico.h"

MainWindow::MainWindow(int _personaje,int _nivel,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    imagen=_personaje;
    nivel=_nivel;
    if(multijugador==false){
        if(nivel==1){
            nivel1();
        }
    }
}

MainWindow::~MainWindow()
{
    delete ui;
    delete personaje->Timerdetenido;
}

void MainWindow::nivel1()
{
    scene = new QGraphicsScene(0,0,1152,648);

    ui->graphicsView->setScene(scene);
    ui->graphicsView->setSceneRect(scene->sceneRect());
    ui->graphicsView->setBackgroundBrush(QImage(":/Imagenes/fondo1.png"));
    ui->graphicsView->show();
    ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);


    mountain<<new hill(QPointF(230,649),QPointF(430,249),QPointF(630,549));
    mountain<<new hill(mountain[0]->getSalida(),QPointF(700,649),QPointF(1330,550));
    mountain<<new hill(mountain[1]->getSalida(),QPointF(1500,600),QPointF(1880,500));

    personaje=new carrografico(mountain[0]->getTetaE(),mountain[0]->getEntrada().x()-45,mountain[0]->getEntrada().y()-25,imagen);
    personaje->setActual(mountain[n]);
    personaje->setSiguiente(mountain[n+1]);
    personaje->getCar()->setP0(mountain[0]->getEntrada());
    personaje->getCar()->setP1(mountain[0]->getControl());
    personaje->getCar()->setP2(mountain[0]->getSalida());

    ui->graphicsView->scene()->addItem(personaje);
    ui->graphicsView->scene()->addPath(*mountain[0]->path,*mountain[0]->pen);
    ui->graphicsView->scene()->addPath(*mountain[1]->path,*mountain[1]->pen);
    ui->graphicsView->scene()->addPath(*mountain[2]->path,*mountain[2]->pen);

    maestro=new QTimer();
    connect(maestro,SIGNAL(timeout()),this,SLOT(actualizacion()));
    maestro->start(50);

}
void MainWindow::keyReleaseEvent(QKeyEvent *event)
{

    personaje->Timerdetenido->stop();
    if(event->isAutoRepeat()){
        if(event->key() == Qt::Key_Space){
            actualizacion();
            personaje->setFlag(1);
            personaje->actualizar();
        }
    }
    else {
        if(event->key() == Qt::Key_P){
            qDebug() << "cogela suave";
        }
    }

    personaje->setFlag(2);
    personaje->Timerdetenido->start(50);

}

void MainWindow::actualizacion()
{
     focus();
     if(mountain[n]->getSalida().x()-personaje->getCar()->getPx()<=50){
        n++;
        personaje->getCar()->setPx(personaje->getCar()->getPx()-45);
        personaje->getCar()->setPy(personaje->getCar()->getPy()-25);
        personaje->getCar()->setP0(mountain[n]->getEntrada());
        personaje->getCar()->setP1(mountain[n]->getControl());
        personaje->getCar()->setP2(mountain[n]->getSalida());
        personaje->getCar()->setDt(0);

     }

}

void MainWindow::focus()
{
    qDebug()<<"focus1";
    ui->graphicsView->setSceneRect(int(personaje->getCar()->getPx()),0,1152,648);
    ui->graphicsView->setScene(scene);

    if(personaje->getCar()->getPy()>=649){
        personaje->getCar()->setPy(649);
    }
    if(personaje->getCar()->getPy()<=0){
        personaje->getCar()->setPy(0);
    }
}
int MainWindow::getImagen() const
{
    return imagen;
}

void MainWindow::setImagen(int value)
{
    imagen = value;
}

int MainWindow::getNivel() const
{
    return nivel;
}

void MainWindow::setNivel(int value)
{
    nivel = value;
}

