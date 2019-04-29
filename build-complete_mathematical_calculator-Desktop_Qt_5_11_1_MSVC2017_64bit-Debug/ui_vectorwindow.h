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
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VectorWindow
{
public:
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QDialog *VectorWindow)
    {
        if (VectorWindow->objectName().isEmpty())
            VectorWindow->setObjectName(QStringLiteral("VectorWindow"));
        VectorWindow->resize(600, 400);
        scrollArea = new QScrollArea(VectorWindow);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(0, 0, 600, 400));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 598, 398));
        scrollArea->setWidget(scrollAreaWidgetContents);

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
