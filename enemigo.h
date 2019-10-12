#ifndef ENEMIGO_H
#define ENEMIGO_H
#include <QGraphicsItem>
#include <QPainter>
#include <QTimer>
#include <QObject>

class enemigo:public QObject,public QGraphicsItem
{
    Q_OBJECT
public:
    enemigo(float _px,float _py);
    ~enemigo();
    float getPx() const;
    void setPx(float value);

    float getPy() const;
    void setPy(float value);

    QTimer *Timerenemigo;
    QTimer *Timerdisparo;
    QTimer *Timermuerte;
    QTimer *Timernormal;
private:
    float px,py,vx,vy,ax,ay;
    int normal=1,disparo=1,muerte=1;
    QPixmap pixmap;
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    void detener();

public slots:
    void mover();
    void movnormal();
    void movdisparo();
    void movmuerte();
};

#endif // ENEMIGO_H
