/********************************************************************************
** Form generated from reading UI file 'circlewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CIRCLEWINDOW_H
#define UI_CIRCLEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_CircleWindow
{
public:

    void setupUi(QDialog *CircleWindow)
    {
        if (CircleWindow->objectName().isEmpty())
            CircleWindow->setObjectName(QStringLiteral("CircleWindow"));
        CircleWindow->resize(400, 300);

        retranslateUi(CircleWindow);

        QMetaObject::connectSlotsByName(CircleWindow);
    } // setupUi

    void retranslateUi(QDialog *CircleWindow)
    {
        CircleWindow->setWindowTitle(QApplication::translate("CircleWindow", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CircleWindow: public Ui_CircleWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CIRCLEWINDOW_H
