#include "polygonwindow.h"
#include "ui_polygonwindow.h"

PolygonWindow::PolygonWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PolygonWindow)
{
    ui->setupUi(this);
}

PolygonWindow::~PolygonWindow()
{
    delete ui;
}
