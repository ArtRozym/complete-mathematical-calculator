#ifndef CIRCLEWINDOW_H
#define CIRCLEWINDOW_H

#include <QDialog>

namespace Ui {
class CircleWindow;
}

class CircleWindow : public QDialog
{
    Q_OBJECT

public:
    explicit CircleWindow(QWidget *parent = 0);
    ~CircleWindow();

private:
    Ui::CircleWindow *ui;
};

#endif // CIRCLEWINDOW_H
