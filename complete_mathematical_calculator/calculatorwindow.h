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

    //книпки
    void on_pBtn_sin_clicked();

    void on_pBtn_cos_clicked();

    void on_pBtn_tan_clicked();

    void on_pBtn_log_clicked();

    void on_pBtn_exp_clicked();

    void on_pBtn_clearOne_clicked();

    void on_pBtn_AC_clicked();

    void on_pBtn_share_clicked();

    void on_pBtn_nFactorial_clicked();

    void on_pBtn_multiply_clicked();

    void on_pBtn_power_clicked();

    void on_pBtn_add_clicked();

    void on_pBtn_root_clicked();

    void on_pBtn_point_clicked();

    void on_pBtn_subtract_clicked();

    void on_pBtn_equals_clicked();

private:
    Ui::CalculatorWindow *ui;
};

#endif // CALCULATORWINDOW_H
