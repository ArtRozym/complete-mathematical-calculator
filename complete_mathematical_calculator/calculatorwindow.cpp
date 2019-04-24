#include "calculatorwindow.h"
#include "ui_calculatorwindow.h"


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

    connect(ui->pBtn_add, SIGNAL(clicked()), this, SLOT(math_operation()));
    connect(ui->pBtn_subtract, SIGNAL(clicked()), this, SLOT(math_operation()));
    connect(ui->pBtn_multiply, SIGNAL(clicked()), this, SLOT(math_operation()));
    connect(ui->pBtn_share, SIGNAL(clicked()), this, SLOT(math_operation()));
    connect(ui->pBtn_power, SIGNAL(clicked()), this, SLOT(math_operation()));
    connect(ui->pBtn_root, SIGNAL(clicked()), this, SLOT(math_operation()));

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
        newLabel = QString::number(allNumbers, 'g', 15);
    }

    ui->label->setText(newLabel);

}

void CalculatorWindow::math_operation()
{
    QPushButton *button = (QPushButton *)sender();

    double numFirst;
    QString newLabel;

    numFirst = ui->label->text().toDouble();
    newLabel = ui->label->text() + button->text();

    ui->label->setText(newLabel);
    button->setChecked(true);

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

        newLabel = QString::number(allNumber, 'g', 15);

        ui->label->setText(newLabel);
    }
    else if(button->text()=="%")
    {
        allNumber = (ui->label->text()).toDouble();
        allNumber *= 0.01;

        newLabel = QString::number(allNumber, 'g', 15);

        ui->label->setText(newLabel);
    }
    else if((button->text()=="n!")&&(!(ui->label->text().contains('.')))&&(!(ui->label->text().contains("-"))))
    {
        allNumber = (ui->label->text()).toDouble();

        double nFactorial=1;
        for(int i = 1; i<=allNumber; i++)
            nFactorial *= i;

        newLabel = QString::number(nFactorial, 'g', 15);
        ui->label->setText(newLabel);
    }

}

//void CalculatorWindow::


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

}
