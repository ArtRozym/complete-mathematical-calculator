/********************************************************************************
** Form generated from reading UI file 'quadranglewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUADRANGLEWINDOW_H
#define UI_QUADRANGLEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_QuadrangleWindow
{
public:

    void setupUi(QDialog *QuadrangleWindow)
    {
        if (QuadrangleWindow->objectName().isEmpty())
            QuadrangleWindow->setObjectName(QStringLiteral("QuadrangleWindow"));
        QuadrangleWindow->resize(400, 300);

        retranslateUi(QuadrangleWindow);

        QMetaObject::connectSlotsByName(QuadrangleWindow);
    } // setupUi

    void retranslateUi(QDialog *QuadrangleWindow)
    {
        QuadrangleWindow->setWindowTitle(QApplication::translate("QuadrangleWindow", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QuadrangleWindow: public Ui_QuadrangleWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUADRANGLEWINDOW_H
