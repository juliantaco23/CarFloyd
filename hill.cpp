#include "hill.h"
#include <QDebug>

hill::hill(QPointF _entrada,QPointF _control,QPointF _salida)
{
    entrada=_entrada;
    control=_control;
    salida=_salida;
    A=new QGraphicsLineItem(entrada.x(),entrada.y(),control.x(),control.y());
    B=new QGraphicsLineItem(control.x(),control.y(),salida.x(),salida.y());
    tetaE=180*atan((control.y()-entrada.y())/(control.x()-entrada.x()))/3.14159;

    tetaF=180*atan((salida.y()-control.y())/(salida.x()-control.x()))/3.14159;
    path=new QPainterPath(entrada);
    path->cubicTo(entrada,control,salida);
    pen=new QPen();
    pen->setWidth(10);
    pen->setColor(Qt::green);
    this->setPath(*path);

}
void hill::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    pixmap.load(":/Imagenes/Ground-PNG-HD.png");
    painter->drawPixmap(boundingRect(),pixmap,pixmap.rect());
}

QPointF hill::getEntrada() const
{
    return entrada;
}

void hill::setEntrada(const QPointF &value)
{
    entrada = value;
}

QPointF hill::getControl() const
{
    return control;
}

void hill::setControl(const QPointF &value)
{
    control = value;
}

QPointF hill::getSalida() const
{
    return salida;
}

void hill::setSalida(const QPointF &value)
{
    salida = value;
}

float hill::getTetaF() const
{
    return tetaF;
}

void hill::setTetaF(float value)
{
    tetaF = value;
}

float hill::getTetaE() const
{
    return tetaE;
}

void hill::setTetaE(float value)
{
    tetaE = value;
}
