#include "carro.h"
#include <QDebug>
carro::carro(float _angle)
{
    ancho=80;
    alto=40;
    vx=0;
    vy=0;
    ax=5;
    ay=5;
    px=0;
    py=0;
    masa=5;
    dt=0;
    angle=_angle;
    uk=0.02;
    g=9.8;
    fuerza=0;

}

void carro::actualizarNormal(int _flag)
{
    if(dt>=1)dt=0;
    px=-45+pow((1-dt),2)*p0.x() + 2*(1-dt)*dt*p1.x()+pow(dt,2)*p2.x();
    py=-45+pow((1-dt),2)*p0.y() + 2*(1-dt)*dt*p1.y()+pow(dt,2)*p2.y();

}

void carro::salto()
{

}

float carro::getAlto() const
{
    return alto;
}

void carro::setAlto(float value)
{
    alto = value;
}

float carro::getAncho() const
{
    return ancho;
}

void carro::setAncho(float value)
{
    ancho = value;
}

float carro::getVx() const
{
    return vx;
}

void carro::setVx(float value)
{
    vx = value;
}

float carro::getVy() const
{
    return vy;
}

void carro::setVy(float value)
{
    vy = value;
}

float carro::getPx() const
{
    return px;
}

void carro::setPx(float value)
{
    px = value;
}

float carro::getPy() const
{
    return py;
}

void carro::setPy(float value)
{
    py = value;
}

float carro::getAx() const
{
    return ax;
}

void carro::setAx(float value)
{
    ax = value;
}

float carro::getAy() const
{
    return ay;
}

void carro::setAy(float value)
{
    ay = value;
}

float carro::getDt() const
{
    return dt;
}

void carro::setDt(float value)
{
    dt = value;
}

float carro::getMasa() const
{
    return masa;
}

void carro::setMasa(float value)
{
    masa = value;
}

float carro::getFuerza() const
{
    return fuerza;
}

void carro::setFuerza(float value)
{
    fuerza = value;
}

float carro::getAngle() const
{
    return angle;
}

void carro::setAngle(float value)
{
    angle = value;
}

hill *carro::getEstado() const
{
    return estado;
}

void carro::setEstado(hill *value)
{
    estado = value;
}

QPointF carro::getP0() const
{
    return p0;
}

void carro::setP0(const QPointF &value)
{
    p0 = value;
}

QPointF carro::getP1() const
{
    return p1;
}

void carro::setP1(const QPointF &value)
{
    p1 = value;
}

QPointF carro::getP2() const
{
    return p2;
}

void carro::setP2(const QPointF &value)
{
    p2 = value;
}
