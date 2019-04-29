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
    connect(ui->pBtn_power, SIGNAL(clicked()), this, SLOT(operations()));

    connect(ui->pBtn_sin, SIGNAL(clicked()), this, SLOT(trigonometryOperations()));
    connect(ui->pBtn_cos, SIGNAL(clicked()), this, SLOT(trigonometryOperations()));
    connect(ui->pBtn_tan, SIGNAL(clicked()), this, SLOT(trigonometryOperations()));

    connect(ui->pBtn_exp, SIGNAL(clicked()), this, SLOT(standartOperations()));
    connect(ui->pBtn_log, SIGNAL(clicked()), this, SLOT(standartOperations()));

    connect(ui->pBtn_add, SIGNAL(clicked()), this, SLOT(math_operation()));
    connect(ui->pBtn_subtract, SIGNAL(clicked()), this, SLOT(math_operation()));
    connect(ui->pBtn_multiply, SIGNAL(clicked()), this, SLOT(math_operation()));
    connect(ui->pBtn_share, SIGNAL(clicked()), this, SLOT(math_operation()));

    ui->pBtn_add->setCheckable(true);
    ui->pBtn_subtract->setCheckable(true);
    ui->pBtn_multiply->setCheckable(true);
    ui->pBtn_share->setCheckable(true);

}

CalculatorWindow::~CalculatorWindow()
{
    delete ui;
}

void CalculatorWindow::digits_numbers()
{
    QPushButton *button = (QPushButton *)sender();

    double allNumbers;
    QString newLabel, startLabel;

    startLabel = ui->label->text();
    if(startLabel == "0")
        startLabel = "";

    //для того щоб можна було поставити . після стартового 0
    if(ui->label->text().contains(".")&&button->text()=="0")
    {
        newLabel = ui->label->text()+button->text();
    }
    else
    {
        if((ui->label->text()=="+")||
                (ui->label->text()=="-")||
                (ui->label->text()=="÷")||
                (ui->label->text()=="*"))
            ui->label->setText("");

        allNumbers = (ui->label->text() + button->text()).toDouble();
        newLabel = QString::number(allNumbers, 'g', 15);
    }

    ui->label->setText(newLabel);
    ui->labelAll->setText(startLabel + newLabel);

}

void CalculatorWindow::math_operation()
{
    QPushButton *button = (QPushButton *)sender();

    QString newLabel;

    numberOne = ui->label->text().toDouble();
    newLabel = button->text();

    ui->label->setText(newLabel);
    ui->labelAll->setText(ui->labelAll->text() + newLabel);
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

    else if(button->text()=="x^2")
        numberOne = pow(allNumber, 2);


    newLabel = QString::number(numberOne, 'g', 15);
    ui->label->setText(newLabel);
    ui->labelAll->setText(newLabel);

}

void CalculatorWindow::trigonometryOperations()
{
    QPushButton *button = (QPushButton *)sender();
    double allNumber;
    QString newLabel, startLabel;

    double const Pi = 3.14159265; //значення П/2

    allNumber = (ui->label->text()).toDouble();
    startLabel = ui->label->text();

    if(button->text() == "sin")
        numberOne = sin(allNumber * Pi/180);
    else if(button->text() == "cos")
        numberOne = cos(allNumber * Pi/180);
    else if(button->text() == "tan")
        numberOne = tan(allNumber * Pi/180);

    if(numberOne<0.0001)
        numberOne = 0;

    newLabel = QString::number(numberOne, 'g', 5);

    ui->label->setText(newLabel);
    ui->labelAll->setText(button->text() + "(" + startLabel + ") = " + newLabel);
}

void CalculatorWindow::standartOperations()
{
    QPushButton *button = (QPushButton *)sender();
    double allNumber;
    QString newLabel;

    allNumber = (ui->label->text()).toDouble();

    if(button->text() == "log")
            numberOne = log10(allNumber);
    else if(button->text() == "exp")
            numberOne = exp(allNumber);

   newLabel = QString::number(numberOne, 'g', 15);
   ui->label->setText(newLabel);
}

void CalculatorWindow::on_pBtn_clearOne_clicked()
{

}

void CalculatorWindow::on_pBtn_AC_clicked()
{
    ui->label->setText("0");
    ui->labelAll->setText("0");
    ui->pBtn_add->setCheckable(false);
    ui->pBtn_subtract->setCheckable(false);
    ui->pBtn_multiply->setCheckable(false);
    ui->pBtn_share->setCheckable(false);
    numberOne = 0.0;
}

void CalculatorWindow::on_pBtn_point_clicked()
{
    if(!(ui->label->text().contains('.')))
        ui->label->setText(ui->label->text() + ".");
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
        ui->labelAll->setText(newLabel);
        ui->pBtn_add->setChecked(false);
    }
    else if(ui->pBtn_subtract->isChecked())
    {
        result = numberOne - numberTwo;
        numberOne = result;
        newLabel = QString::number(result, 'g', 15);
        ui->label->setText(newLabel);
        ui->labelAll->setText(newLabel);
        ui->pBtn_subtract->setChecked(false);
    }
    else if(ui->pBtn_multiply->isChecked())//працює лише для додатнього цілого множника
    {
        result = numberOne * numberTwo;
        numberOne = result;
        newLabel = QString::number(result, 'g', 15);
        ui->label->setText(newLabel);
        ui->labelAll->setText(newLabel);
        ui->pBtn_multiply->setChecked(false);
    }
    else if(ui->pBtn_share->isChecked())//працює лише для додатнього цілого знаменика
    {
        if(numberTwo == 0)
        {
            ui->label->setText("0");
            ui->labelAll->setText("0");
        }
        else
        {
            result = numberOne / numberTwo;
            numberOne = result;
            newLabel = QString::number(result, 'g', 15);
            ui->label->setText(newLabel);
            ui->labelAll->setText(newLabel);
        }

        ui->pBtn_share->setChecked(false);
    }

}
