#ifndef TRIANGLEWINDOW_H
#define TRIANGLEWINDOW_H

#include <QDialog>

namespace Ui {
class TriangleWindow;
}

class TriangleWindow : public QDialog
{
    Q_OBJECT

public:
    explicit TriangleWindow(QWidget *parent = 0);
    ~TriangleWindow();

private:
    Ui::TriangleWindow *ui;
};

#endif // TRIANGLEWINDOW_H
