/********************************************************************************
** Form generated from reading UI file 'vectorwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VECTORWINDOW_H
#define UI_VECTORWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_VectorWindow
{
public:

    void setupUi(QDialog *VectorWindow)
    {
        if (VectorWindow->objectName().isEmpty())
            VectorWindow->setObjectName(QStringLiteral("VectorWindow"));
        VectorWindow->resize(400, 300);

        retranslateUi(VectorWindow);

        QMetaObject::connectSlotsByName(VectorWindow);
    } // setupUi

    void retranslateUi(QDialog *VectorWindow)
    {
        VectorWindow->setWindowTitle(QApplication::translate("VectorWindow", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VectorWindow: public Ui_VectorWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VECTORWINDOW_H
