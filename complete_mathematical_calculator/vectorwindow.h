#ifndef VECTORWINDOW_H
#define VECTORWINDOW_H

#include <QDialog>

namespace Ui {
class VectorWindow;
}

class VectorWindow : public QDialog
{
    Q_OBJECT

public:
    explicit VectorWindow(QWidget *parent = 0);
    ~VectorWindow();



private:
    Ui::VectorWindow *ui;
};

#endif // VECTORWINDOW_H
