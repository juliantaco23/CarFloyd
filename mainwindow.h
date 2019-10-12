#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QKeyEvent>
#include <QTimer>
#include "carrografico.h"
#include "enemigo.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(int _personaje,int _nivel,QWidget *parent = nullptr);
    ~MainWindow();
    void nivel1();

    int getImagen() const;
    void setImagen(int value);

    int getNivel() const;
    void setNivel(int value);

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    carrografico *personaje;
    enemigo *hand;
    QList<hill *>mountain;
    bool multijugador;
    int flag=0,n=0,imagen,nivel;
    QTimer *maestro;

    void focus();
public slots:
    void keyReleaseEvent(QKeyEvent * event);
    void actualizacion();
};

#endif // MAINWINDOW_H
