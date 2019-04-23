#include "vectorwindow.h"
#include "ui_vectorwindow.h"

VectorWindow::VectorWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VectorWindow)
{
    ui->setupUi(this);
}

VectorWindow::~VectorWindow()
{
    delete ui;
}
