#include "trianglewindow.h"
#include "ui_trianglewindow.h"

TriangleWindow::TriangleWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TriangleWindow)
{
    ui->setupUi(this);
}

TriangleWindow::~TriangleWindow()
{
    delete ui;
}
