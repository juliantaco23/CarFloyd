#ifndef SELECCION_H
#define SELECCION_H

#include <QMainWindow>
#include <QGraphicsScene>
#include "mainwindow.h"

namespace Ui {
class Seleccion;
}

class Seleccion : public QMainWindow
{
    Q_OBJECT

public:
    explicit Seleccion(QWidget *parent = nullptr);
    ~Seleccion();
    MainWindow *juego;
    carrografico *personaje;

private slots:


    void on_mario_clicked();

    void on_luigi_clicked();

    void on_yoshi_clicked();

    void on_donkey_clicked();

    void on_peach_clicked();

    void on_daisy_clicked();

    void on_bowser_clicked();

    void on_toad_clicked();

    void on_koopa_clicked();

    void on_boo_clicked();

    void on_paleta_clicked();

    void on_darkmario_clicked();

    void on_babymario_clicked();

    void on_babyluigi_clicked();

    void on_babybowser_clicked();

    void on_wario_clicked();

    void on_waluigi_clicked();

    void on_darkbowser_clicked();

    void on_gaytoad_clicked();

    void on_gaykoopa_clicked();

    void on_koopa2_clicked();

    void on_koopa3_clicked();

    void on_koopa4_clicked();

    void on_simio_clicked();

    void on_pushButton_clicked();

private:
    Ui::Seleccion *ui;
    int imagen,nivel;
};

#endif // SELECCION_H
