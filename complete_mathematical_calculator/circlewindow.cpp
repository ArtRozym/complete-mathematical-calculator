#include "circlewindow.h"
#include "ui_circlewindow.h"

CircleWindow::CircleWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CircleWindow)
{
    ui->setupUi(this);
}

CircleWindow::~CircleWindow()
{
    delete ui;
}
