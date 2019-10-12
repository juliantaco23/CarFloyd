#include "carrografico.h"

carrografico::carrografico(float _angle,float _x,float _y,int _imagen)
{
    angle=_angle;
    car=new carro(_angle);

    this->setFlag(QGraphicsItem::ItemIsFocusable);
    this->setFocus();
    car->setPx(_x);
    car->setPy(_y);
    setPos(_x,_y);
    imagen=_imagen;
    Timerdetenido=new QTimer(this);
    connect(Timerdetenido,SIGNAL(timeout()),this,SLOT(actualizar()));
    Timerdetenido->start(50);



}

carrografico::~carrografico()
{
    delete car;
    delete actual;
    delete anterior;
    delete siguiente;

}

void carrografico::actualizar()
{

    angle=-180*atan(car->getPy()/car->getPx())/3.14159;
    this->setRotation(angle);
    if(flag==1){
        car->setDt(car->getDt()+0.007);
        car->actualizarNormal(1);
        setPos(car->getPx(),car->getPy());
    }
    else if (flag==2) {
        if(car->getPx()>=car->getP1().x()){
            car->setDt(car->getDt()+0.002);
            car->actualizarNormal(1);
        }
        else if(car->getPx()<=car->getP1().x()){
            car->setDt(car->getDt()-0.002);
            car->actualizarNormal(1);
        }
        setPos(car->getPx(),car->getPy());
    }

}


QRectF carrografico::boundingRect() const
{
    return QRect(0,0,80,80);
}

void carrografico::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    switch (imagen) {
    case 1:
        pixmap.load(":/Imagenes/Personajes/Mario.png");
        break;
    case 2:
        pixmap.load(":/Imagenes/Personajes/luigi.png");

        break;
    case 3:
        pixmap.load(":/Imagenes/Personajes/yoshi.png");
        break;
    case 4:
        pixmap.load(":/Imagenes/Personajes/donkey.png");
        break;
    case 5:
        pixmap.load(":/Imagenes/Personajes/peach.png");
        break;
    case 6:
        pixmap.load(":/Imagenes/Personajes/daisy.png");
        break;
    case 7:
        pixmap.load(":/Imagenes/Personajes/bowser.png");
        break;
    case 8:
        pixmap.load(":/Imagenes/Personajes/toad.png");
        break;
    case 9:
        pixmap.load(":/Imagenes/Personajes/carrosprites.png");
        break;
    case 10:
        pixmap.load(":/Imagenes/Personajes/boo.png");
        break;
    case 11:
        pixmap.load(":/Imagenes/Personajes/paleta.png");
        break;
    case 12:
        pixmap.load(":/Imagenes/Personajes/darkmario.png");
        break;
    case 13:
        pixmap.load(":/Imagenes/Personajes/litlemario.png");
        break;
    case 14:
        pixmap.load(":/Imagenes/Personajes/litleluigi.png");
        break;
    case 15:
        pixmap.load(":/Imagenes/Personajes/litlebowser.png");
        break;
    case 16:
        pixmap.load(":/Imagenes/Personajes/wario.png");
        break;
    case 17:
        pixmap.load(":/Imagenes/Personajes/waluigi.png");
        break;
    case 18:
        pixmap.load(":/Imagenes/Personajes/bowser2.png");
        break;
    case 19:
        pixmap.load(":/Imagenes/Personajes/gaytoad.png");
        break;
    case 20:
        pixmap.load(":/Imagenes/Personajes/gaykoopa.png");
        break;
    case 21:
        pixmap.load(":/Imagenes/Personajes/koopa2.png");
        break;
    case 22:
        pixmap.load(":/Imagenes/Personajes/koopa3.png");
        break;
    case 23:
        pixmap.load(":/Imagenes/Personajes/koopa4.png");
        break;
    case 24:
        pixmap.load(":/Imagenes/Personajes/simio.png");
        break;
    default:
        pixmap.load(":/Imagenes/Personajes/Mario.png");
        break;
    }

    painter->drawPixmap(boundingRect(),pixmap,pixmap.rect());
}

int carrografico::getFlag() const
{
    return flag;
}

void carrografico::setFlag(int value)
{
    flag = value;
}

int carrografico::getImagen() const
{
    return imagen;
}

void carrografico::setImagen(int value)
{
    imagen = value;
}

hill *carrografico::getActual() const
{
    return actual;
}

void carrografico::setActual(hill *value)
{
    actual = value;
}

hill *carrografico::getAnterior() const
{
    return anterior;
}

void carrografico::setAnterior(hill *value)
{
    anterior = value;
}

hill *carrografico::getSiguiente() const
{
    return siguiente;
}

void carrografico::setSiguiente(hill *value)
{
    siguiente = value;
}

void carrografico::setAngle(float value)
{
    angle = value;
}


carro *carrografico::getCar() const
{
    return car;
}

void carrografico::setCar(carro *value)
{
    car = value;
}

float carrografico::getAngle() const
{
    return angle;
}
