#ifndef CALCULATORWINDOW_H
#define CALCULATORWINDOW_H

#include <QDialog>

namespace Ui {
class CalculatorWindow;
}

class CalculatorWindow : public QDialog
{
    Q_OBJECT

public:
    explicit CalculatorWindow(QWidget *parent = 0);
    ~CalculatorWindow();



private:
    Ui::CalculatorWindow *ui;
};

#endif // CALCULATORWINDOW_H
