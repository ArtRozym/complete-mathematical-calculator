#include "quadranglewindow.h"
#include "ui_quadranglewindow.h"

QuadrangleWindow::QuadrangleWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QuadrangleWindow)
{
    ui->setupUi(this);
}

QuadrangleWindow::~QuadrangleWindow()
{
    delete ui;
}
