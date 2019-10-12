#ifndef MENU_H
#define MENU_H

#include <QMainWindow>
#include "mainwindow.h"
#include "instrucciones.h"
#include "seleccion.h"

namespace Ui {
class Menu;
}

class Menu : public QMainWindow
{
    Q_OBJECT

public:
    explicit Menu(QWidget *parent = nullptr);
    ~Menu();
    Seleccion *intro;

private slots:
    void on_Unjugador_clicked();

    void on_Multijugador_clicked();

    void on_Instrucciones_clicked();

    void on_Salir_clicked();

    void on_leaderboards_clicked();

private:
    Ui::Menu *ui;
    instrucciones *read;
    QGraphicsScene *scene;

};

#endif // MENU_H
