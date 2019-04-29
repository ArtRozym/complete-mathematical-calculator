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



private slots:
    //ф-ї
    void digits_numbers();
    void math_operation();
    void operations();
    void standartOperations();
    void trigonometryOperations();

    //книпки

    void on_pBtn_clearOne_clicked();

    void on_pBtn_AC_clicked();

    void on_pBtn_point_clicked();

    void on_pBtn_equals_clicked();

private:
    Ui::CalculatorWindow *ui;
};

#endif // CALCULATORWINDOW_H
