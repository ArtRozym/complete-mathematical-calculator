#ifndef POLYGONWINDOW_H
#define POLYGONWINDOW_H

#include <QDialog>

namespace Ui {
class PolygonWindow;
}

class PolygonWindow : public QDialog
{
    Q_OBJECT

public:
    explicit PolygonWindow(QWidget *parent = 0);
    ~PolygonWindow();

private:
    Ui::PolygonWindow *ui;
};

#endif // POLYGONWINDOW_H
