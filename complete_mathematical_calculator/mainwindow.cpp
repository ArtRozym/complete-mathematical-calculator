#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);



}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pBtn_Calculator_clicked()
{
    calculatorWin = new CalculatorWindow(this);
    calculatorWin->show();
}

void MainWindow::on_pBtn_Vector_clicked()
{
    vectorWin = new VectorWindow(this);
    vectorWin->show();
}

void MainWindow::on_pBtn_Triangle_clicked()
{
    triangleWin = new TriangleWindow(this);
    triangleWin->show();
}

void MainWindow::on_pBtn_Quadrangle_clicked()
{
    quadrangWin = new QuadrangleWindow(this);
    quadrangWin->show();
}

void MainWindow::on_pBtn_Polygon_clicked()
{
    polygonWin = new PolygonWindow(this);
    polygonWin->show();
}

void MainWindow::on_pBtn_Circle_clicked()
{
    circleWin = new CircleWindow(this);
    circleWin->show();
}
