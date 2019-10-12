#ifndef HILL_H
#define HILL_H
#include <vector>
#include <QPainterPath>
#include <QPainter>
#include <QGraphicsPathItem>
#include <QGraphicsLineItem>
#include <QPen>
#include <math.h>
using namespace std;

class hill:public QObject,public QGraphicsPathItem
{
    Q_OBJECT
public:
    hill(QPointF _entrada,QPointF _control,QPointF _salida);

    QPointF getEntrada() const;
    void setEntrada(const QPointF &value);

    QPointF getControl() const;
    void setControl(const QPointF &value);

    QPointF getSalida() const;
    void setSalida(const QPointF &value);

    float getTetaE() const;
    void setTetaE(float value);

    float getTetaF() const;
    void setTetaF(float value);

    QPen *pen;
    QPainterPath *path;
    QGraphicsLineItem *A,*B;

private:
    QPointF entrada,control,salida;
    QPixmap pixmap;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    float tetaE,tetaF;
    hill();


    float getAentrada() const;
    void setAentrada(float value);

    float getAsalida() const;
    void setAsalida(float value);

    float getDentrada() const;
    void setDentrada(float value);

    float getDsalida() const;
    void setDsalida(float value);

private:
    float Aentrada,Asalida,Dentrada,Dsalida;
};

#endif // HILL_H
