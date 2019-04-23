#ifndef QUADRANGLEWINDOW_H
#define QUADRANGLEWINDOW_H

#include <QDialog>

namespace Ui {
class QuadrangleWindow;
}

class QuadrangleWindow : public QDialog
{
    Q_OBJECT

public:
    explicit QuadrangleWindow(QWidget *parent = 0);
    ~QuadrangleWindow();

private:
    Ui::QuadrangleWindow *ui;
};

#endif // QUADRANGLEWINDOW_H
