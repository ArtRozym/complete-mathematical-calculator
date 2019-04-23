#include "calculatorwindow.h"
#include "ui_calculatorwindow.h"

CalculatorWindow::CalculatorWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CalculatorWindow)
{
    ui->setupUi(this);

    connect(ui->PBtn_0, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->PBtn_1, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->PBtn_2, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->PBtn_3, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->PBtn_4, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->PBtn_5, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->PBtn_6, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->PBtn_7, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->PBtn_8, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->PBtn_9, SIGNAL(clicked()), this, SLOT(digits_numbers()));

    connect(ui->pBtn_plusOrMinus, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pBtn_interest, SIGNAL(clicked()), this, SLOT(operations()));

}

CalculatorWindow::~CalculatorWindow()
{
    delete ui;
}

void CalculatorWindow::digits_numbers()
{
    QPushButton *button = (QPushButton *)sender();

    double allNumbers;
    QString newLabel;

    //для того щоб можна було поставити . після стартового 0
    if(ui->label->text().contains(".")&&button->text()=="0")
    {
        newLabel = ui->label->text()+button->text();
    }
    else
    {
        allNumbers = (ui->label->text() + button->text()).toDouble();
        newLabel = QString::number(allNumbers, 'g', 20);
    }

    ui->label->setText(newLabel);

}

void CalculatorWindow::operations()
{
    QPushButton *button = (QPushButton *)sender();
    double allNumber;
    QString newLabel;

    if(button->text()=="+/-")
    {
        allNumber = (ui->label->text()).toDouble();
        allNumber *= -1;

        newLabel = QString::number(allNumber, 'g', 20);

        ui->label->setText(newLabel);
    }
    else if(button->text()=="%")
    {
        allNumber = (ui->label->text()).toDouble();
        allNumber *= 0.01;

        newLabel = QString::number(allNumber, 'g', 20);

        ui->label->setText(newLabel);
    }

}


void CalculatorWindow::on_pBtn_sin_clicked()
{

}

void CalculatorWindow::on_pBtn_cos_clicked()
{

}

void CalculatorWindow::on_pBtn_tan_clicked()
{

}

void CalculatorWindow::on_pBtn_log_clicked()
{

}

void CalculatorWindow::on_pBtn_exp_clicked()
{

}

void CalculatorWindow::on_pBtn_clearOne_clicked()
{

}

void CalculatorWindow::on_pBtn_AC_clicked()
{

}


void CalculatorWindow::on_pBtn_share_clicked()
{

}

void CalculatorWindow::on_pBtn_nFactorial_clicked()
{

}


void CalculatorWindow::on_pBtn_multiply_clicked()
{

}

void CalculatorWindow::on_pBtn_power_clicked()
{

}


void CalculatorWindow::on_pBtn_add_clicked()
{

}

void CalculatorWindow::on_pBtn_root_clicked()
{

}

void CalculatorWindow::on_pBtn_bracketLeft_clicked()
{

}

void CalculatorWindow::on_pBtn_bracketRight_clicked()
{

}

void CalculatorWindow::on_pBtn_point_clicked()
{
    //перевіряємо чи вже є . якщо не має то дозволяємо додати
    if(!(ui->label->text().contains('.')))
        ui->label->setText(ui->label()+".");
}

void CalculatorWindow::on_pBtn_subtract_clicked()
{

}

void CalculatorWindow::on_pBtn_equals_clicked()
{

}
