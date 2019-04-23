/********************************************************************************
** Form generated from reading UI file 'polygonwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POLYGONWINDOW_H
#define UI_POLYGONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_PolygonWindow
{
public:

    void setupUi(QDialog *PolygonWindow)
    {
        if (PolygonWindow->objectName().isEmpty())
            PolygonWindow->setObjectName(QStringLiteral("PolygonWindow"));
        PolygonWindow->resize(400, 300);

        retranslateUi(PolygonWindow);

        QMetaObject::connectSlotsByName(PolygonWindow);
    } // setupUi

    void retranslateUi(QDialog *PolygonWindow)
    {
        PolygonWindow->setWindowTitle(QApplication::translate("PolygonWindow", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PolygonWindow: public Ui_PolygonWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POLYGONWINDOW_H
