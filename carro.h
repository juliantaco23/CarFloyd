#define CARRO_H
#include "hill.h"
#include <QTimer>
#include <QGraphicsRectItem>
#include <math.h>
#include <QGraphicsScene>
#include <QKeyEvent>

class carro
{
public:
    carro(float _angle);
    void actualizarNormal(int _flag);
    void salto();

    float getAlto() const;
    void setAlto(float value);

    float getAncho() const;
    void setAncho(float value);

    float getVx() const;
    void setVx(float value);

    float getVy() const;
    void setVy(float value);

    float getPx() const;
    void setPx(float value);

    float getPy() const;
    void setPy(float value);

    float getAx() const;
    void setAx(float value);

    float getAy() const;
    void setAy(float value);

    float getDt() const;
    void setDt(float value);

    float getMasa() const;
    void setMasa(float value);


    float getFuerza() const;
    void setFuerza(float value);

    float getAngle() const;
    void setAngle(float value);

    hill *getEstado() const;
    void setEstado(hill *value);

    QPointF getP0() const;
    void setP0(const QPointF &value);

    QPointF getP1() const;
    void setP1(const QPointF &value);

    QPointF getP2() const;
    void setP2(const QPointF &value);

private:
    float alto,ancho,vx,vy,px,py,ax,ay,dt,masa,angle,uk,g,contador,fuerza;
    QPointF p0,p1,p2;
    hill *estado;
};
