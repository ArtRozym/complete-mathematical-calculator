#include "calculatorwindow.h"
#include "ui_calculatorwindow.h"

#include <cmath>

double numberOne;

CalculatorWindow::CalculatorWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CalculatorWindow)
{
    ui->setupUi(this);

    connect(ui->pBtn_0, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pBtn_1, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pBtn_2, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pBtn_3, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pBtn_4, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pBtn_5, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pBtn_6, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pBtn_7, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pBtn_8, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pBtn_9, SIGNAL(clicked()), this, SLOT(digits_numbers()));

    connect(ui->pBtn_plusOrMinus, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pBtn_interest, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pBtn_nFactorial, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pBtn_root, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pBtn_oneX, SIGNAL(clicked()), this, SLOT(operations()));

    connect(ui->pBtn_add, SIGNAL(clicked()), this, SLOT(math_operation()));
    connect(ui->pBtn_subtract, SIGNAL(clicked()), this, SLOT(math_operation()));
    connect(ui->pBtn_multiply, SIGNAL(clicked()), this, SLOT(math_operation()));
    connect(ui->pBtn_share, SIGNAL(clicked()), this, SLOT(math_operation()));
    connect(ui->pBtn_power, SIGNAL(clicked()), this, SLOT(math_operation()));

    ui->pBtn_add->setCheckable(true);
    ui->pBtn_subtract->setCheckable(true);
    ui->pBtn_multiply->setCheckable(true);
    ui->pBtn_share->setCheckable(true);
    ui->pBtn_power->setCheckable(true);

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
        if((ui->label->text()=="+")||
                (ui->label->text()=="-")||
                (ui->label->text()=="^")||
                (ui->label->text()=="÷")||
                (ui->label->text()=="x"))
            ui->label->setText("");

        allNumbers = (ui->label->text() + button->text()).toDouble();
        newLabel = QString::number(allNumbers, 'g', 15);
    }

    ui->label->setText(newLabel);

}

void CalculatorWindow::math_operation()
{
    QPushButton *button = (QPushButton *)sender();

    QString newLabel;

    numberOne = ui->label->text().toDouble();
    newLabel = button->text();

    ui->label->setText(newLabel);
    button->setChecked(true);

}

void CalculatorWindow::operations()
{
    QPushButton *button = (QPushButton *)sender();
    double allNumber;
    QString newLabel;

    allNumber = (ui->label->text()).toDouble();

    if(button->text()=="+/-")
        numberOne = -1*allNumber;

    else if(button->text()=="%")
        numberOne = allNumber *0.01;

    else if((button->text()=="n!")&&(!(ui->label->text().contains('.')))&&(!(ui->label->text().contains("-"))))
    {
        numberOne = 1;
        for(int i = 1; i<=allNumber; i++)
            numberOne *= i;
    }
    else if(button->text()=="√")
    {
        if(allNumber<0.0)
            numberOne = 0.0;
        else
            numberOne = std::sqrt(allNumber);
    }
    else if(button->text()=="1/x")
        numberOne = 1.0/allNumber;

    newLabel = QString::number(numberOne, 'g', 15);
    ui->label->setText(newLabel);

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
    ui->label->setText("0");
    ui->pBtn_add->setCheckable(false);
    ui->pBtn_subtract->setCheckable(false);
    ui->pBtn_multiply->setCheckable(false);
    ui->pBtn_share->setCheckable(false);
    ui->pBtn_power->setCheckable(false);
    numberOne = 0.0;
}

//потрібно переписати щоб не можна було ставити після знаку
void CalculatorWindow::on_pBtn_point_clicked()
{
    //перевіряємо чи вже є . якщо не має то дозволяємо додати
    if(!(ui->label->text().contains('.')))
        ui->label->setText(ui->label->text() + ".");
}

void CalculatorWindow::on_pBtn_subtract_clicked()
{

}

void CalculatorWindow::on_pBtn_equals_clicked()
{
    double result, numberTwo;
    numberTwo = ui->label->text().toDouble();
    QString newLabel;

    if(ui->pBtn_add->isChecked())
    {
        result = numberOne + numberTwo;
        numberOne = result;
        newLabel = QString::number(result, 'g', 15);
        ui->label->setText(newLabel);
        ui->pBtn_add->setChecked(false);
    }
    else if(ui->pBtn_subtract->isChecked())
    {
        result = numberOne - numberTwo;
        numberOne = result;
        newLabel = QString::number(result, 'g', 15);
        ui->label->setText(newLabel);
        ui->pBtn_subtract->setChecked(false);
    }
    else if(ui->pBtn_multiply->isChecked())//працює лише для додатнього цілого множника
    {
        result = numberOne * numberTwo;
        numberOne = result;
        newLabel = QString::number(result, 'g', 15);
        ui->label->setText(newLabel);
        ui->pBtn_multiply->setChecked(false);
    }
    else if(ui->pBtn_share->isChecked())//працює лише для додатнього цілого знаменика
    {
        if(numberTwo == 0)
            ui->label->setText("0");
        else
        {
            result = numberOne / numberTwo;
            numberOne = result;
            newLabel = QString::number(result, 'g', 15);
            ui->label->setText(newLabel);
        }

        ui->pBtn_share->setChecked(false);
    }
    else if(ui->pBtn_power->isChecked())//працює лише для додатніх цілих степенів
    {
        result = pow(numberOne, numberTwo);
        numberOne = result;
        newLabel = QString::number(result, 'g', 15);
        ui->label->setText(newLabel);
        ui->pBtn_power->setChecked(false);
    }

}
