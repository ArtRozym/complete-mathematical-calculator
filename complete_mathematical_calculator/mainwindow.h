#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "calculatorwindow.h"
#include "circlewindow.h"
#include "polygonwindow.h"
#include "quadranglewindow.h"
#include "trianglewindow.h"
#include "vectorwindow.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pBtn_Calculator_clicked();

    void on_pBtn_Vector_clicked();

    void on_pBtn_Triangle_clicked();

    void on_pBtn_Quadrangle_clicked();

    void on_pBtn_Polygon_clicked();

    void on_pBtn_Circle_clicked();

private:
    Ui::MainWindow *ui;

    CalculatorWindow *calculatorWin;
    CircleWindow *circleWin;
    PolygonWindow *polygonWin;
    QuadrangleWindow *quadrangWin;
    TriangleWindow *triangleWin;
    VectorWindow *vectorWin;

};

#endif // MAINWINDOW_H
