/********************************************************************************
** Form generated from reading UI file 'trianglewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRIANGLEWINDOW_H
#define UI_TRIANGLEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_TriangleWindow
{
public:

    void setupUi(QDialog *TriangleWindow)
    {
        if (TriangleWindow->objectName().isEmpty())
            TriangleWindow->setObjectName(QStringLiteral("TriangleWindow"));
        TriangleWindow->resize(400, 300);

        retranslateUi(TriangleWindow);

        QMetaObject::connectSlotsByName(TriangleWindow);
    } // setupUi

    void retranslateUi(QDialog *TriangleWindow)
    {
        TriangleWindow->setWindowTitle(QApplication::translate("TriangleWindow", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TriangleWindow: public Ui_TriangleWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRIANGLEWINDOW_H
