#ifndef CARROGRAFICO_H
#define CARROGRAFICO_H
#include <QPainter>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QTimer>
#include <QObject>
#include <QDebug>
#include "carro.h"
#include "hill.h"

class carrografico:public QObject,public QGraphicsItem
{
    Q_OBJECT
public:
    carrografico(float _angle,float _x,float _y,int _imagen);
    ~carrografico();
    void acelerar();
    float getAngle() const;
    void setAngle(float value);

    carro *getCar() const;
    void setCar(carro *value);

    QTimer *Timerdetenido;

    int getImagen() const;
    void setImagen(int value);

    hill *getActual() const;
    void setActual(hill *value);

    hill *getAnterior() const;
    void setAnterior(hill *value);

    hill *getSiguiente() const;
    void setSiguiente(hill *value);

    int getFlag() const;
    void setFlag(int value);

private:
    carro *car;
    hill *actual,*anterior,*siguiente;
    QPixmap pixmap;
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    float angle;

    int flag,imagen;
public slots:
    void actualizar();


};

#endif // CARROGRAFICO_H
