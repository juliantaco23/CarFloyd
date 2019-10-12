#include "enemigo.h"

enemigo::enemigo(float _px,float _py)
{
    setPos(_px,_py);
    this->setFlag(QGraphicsItem::ItemIsFocusable);
    this->setFocus();
    this->setPx(_px);
    this->setPy(_py);

    Timernormal= new QTimer();
    Timermuerte= new QTimer();
    Timerdisparo= new QTimer();
    Timerenemigo = new QTimer();


    connect(Timernormal,SIGNAL(timeout()),this,SLOT(movnormal()));
    connect(Timermuerte,SIGNAL(timeout()),this,SLOT(movmuerte()));
    connect(Timerdisparo,SIGNAL(timeout()),this,SLOT(movdisparo()));
    connect(Timerenemigo,SIGNAL(timeout()),this,SLOT(mover()));

}

enemigo::~enemigo()
{
    delete Timermuerte;
    delete Timernormal;
    delete Timerdisparo;
    delete Timerenemigo;
}

float enemigo::getPx() const
{
    return px;
}

void enemigo::setPx(float value)
{
    px = value;
}

float enemigo::getPy() const
{
    return py;
}

void enemigo::setPy(float value)
{
    py = value;
}

QRectF enemigo::boundingRect() const
{
    return QRect(0,0,100,100);
}

void enemigo::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(boundingRect(),pixmap,pixmap.rect());
}

void enemigo::detener()
{
    Timermuerte->stop();
    Timernormal->stop();
    Timerdisparo->stop();
}

void enemigo::mover()
{

}

void enemigo::movnormal()
{
    detener();
    Timernormal->start(150);
    switch (normal) {
    case 1:
        pixmap.load(":/Imagenes/Personajes/Enemigo/normal/1.png");
        normal++;

        break;
    case 2:
        pixmap.load(":/Imagenes/Personajes/Enemigo/normal/2.png");
        normal++;

        break;
    case 3:
        pixmap.load(":/Imagenes/Personajes/Enemigo/normal/3.png");
        normal++;

        break;
    case 4:
        pixmap.load(":/Imagenes/Personajes/Enemigo/normal/4.png");
        normal++;

        break;
    case 5:
        pixmap.load(":/Imagenes/Personajes/Enemigo/normal/5.png");
        normal++;

        break;
    case 6:
        pixmap.load(":/Imagenes/Personajes/Enemigo/normal/6.png");
        normal++;

        break;
    case 7:
        pixmap.load(":/Imagenes/Personajes/Enemigo/normal/7.png");
        normal++;

        break;
    case 8:
        pixmap.load(":/Imagenes/Personajes/Enemigo/normal/8.png");
        normal++;

        break;
    case 9:
        pixmap.load(":/Imagenes/Personajes/Enemigo/normal/9.png");
        normal=1;

        break;
    }

}

void enemigo::movdisparo()
{
    detener();
    Timerdisparo->start(50);
    switch (disparo) {
    case 1:
        pixmap.load(":/Imagenes/Personajes/Enemigo/Disparo/1.png");
        disparo++;

        break;
    case 2:
        pixmap.load(":/Imagenes/Personajes/Enemigo/Disparo/2.png");
        disparo++;

        break;
    case 3:
        pixmap.load(":/Imagenes/Personajes/Enemigo/Disparo/3.png");
        disparo++;

        break;
    case 4:
        pixmap.load(":/Imagenes/Personajes/Enemigo/Disparo/4.png");
        disparo++;

        break;
    case 5:
        pixmap.load(":/Imagenes/Personajes/Enemigo/Disparo/5.png");
        disparo++;

        break;
    case 6:
        pixmap.load(":/Imagenes/Personajes/Enemigo/Disparo/6.png");
        disparo++;

        break;
    case 7:
        pixmap.load(":/Imagenes/Personajes/Enemigo/Disparo/7.png");
        disparo=1;

        break;
    }

}

void enemigo::movmuerte()
{
    detener();
    Timermuerte->start(50);
    switch (muerte) {
    case 1:
        pixmap.load(":/Imagenes/Personajes/Enemigo/Muerte/1.png");
        muerte++;

        break;
    case 2:
        pixmap.load(":/Imagenes/Personajes/Enemigo/Muerte/2.png");
        muerte++;

        break;
    case 3:
        pixmap.load(":/Imagenes/Personajes/Enemigo/Muerte/3.png");
        muerte++;

        break;
    case 4:
        pixmap.load(":/Imagenes/Personajes/Enemigo/Muerte/4.png");
        muerte=1;

        break;

    }
}
