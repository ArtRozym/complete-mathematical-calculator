/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QPushButton *pBtn_Quadrangle;
    QPushButton *pushButton_8;
    QPushButton *pBtn_Triangle;
    QPushButton *pBtn_Circle;
    QPushButton *pBtn_Calculator;
    QPushButton *pBtn_Vector;
    QPushButton *pBtn_Polygon;
    QPushButton *pushButton_7;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(575, 441);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pBtn_Quadrangle = new QPushButton(centralWidget);
        pBtn_Quadrangle->setObjectName(QStringLiteral("pBtn_Quadrangle"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pBtn_Quadrangle->sizePolicy().hasHeightForWidth());
        pBtn_Quadrangle->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(20);
        pBtn_Quadrangle->setFont(font);

        gridLayout->addWidget(pBtn_Quadrangle, 3, 0, 1, 1);

        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        sizePolicy1.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy1);
        pushButton_8->setFont(font);

        gridLayout->addWidget(pushButton_8, 7, 0, 1, 1);

        pBtn_Triangle = new QPushButton(centralWidget);
        pBtn_Triangle->setObjectName(QStringLiteral("pBtn_Triangle"));
        sizePolicy1.setHeightForWidth(pBtn_Triangle->sizePolicy().hasHeightForWidth());
        pBtn_Triangle->setSizePolicy(sizePolicy1);
        pBtn_Triangle->setFont(font);

        gridLayout->addWidget(pBtn_Triangle, 2, 0, 1, 1);

        pBtn_Circle = new QPushButton(centralWidget);
        pBtn_Circle->setObjectName(QStringLiteral("pBtn_Circle"));
        sizePolicy1.setHeightForWidth(pBtn_Circle->sizePolicy().hasHeightForWidth());
        pBtn_Circle->setSizePolicy(sizePolicy1);
        pBtn_Circle->setFont(font);

        gridLayout->addWidget(pBtn_Circle, 5, 0, 1, 1);

        pBtn_Calculator = new QPushButton(centralWidget);
        pBtn_Calculator->setObjectName(QStringLiteral("pBtn_Calculator"));
        sizePolicy1.setHeightForWidth(pBtn_Calculator->sizePolicy().hasHeightForWidth());
        pBtn_Calculator->setSizePolicy(sizePolicy1);
        pBtn_Calculator->setFont(font);

        gridLayout->addWidget(pBtn_Calculator, 0, 0, 1, 1);

        pBtn_Vector = new QPushButton(centralWidget);
        pBtn_Vector->setObjectName(QStringLiteral("pBtn_Vector"));
        sizePolicy1.setHeightForWidth(pBtn_Vector->sizePolicy().hasHeightForWidth());
        pBtn_Vector->setSizePolicy(sizePolicy1);
        pBtn_Vector->setFont(font);

        gridLayout->addWidget(pBtn_Vector, 1, 0, 1, 1);

        pBtn_Polygon = new QPushButton(centralWidget);
        pBtn_Polygon->setObjectName(QStringLiteral("pBtn_Polygon"));
        sizePolicy1.setHeightForWidth(pBtn_Polygon->sizePolicy().hasHeightForWidth());
        pBtn_Polygon->setSizePolicy(sizePolicy1);
        pBtn_Polygon->setFont(font);

        gridLayout->addWidget(pBtn_Polygon, 4, 0, 1, 1);

        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        sizePolicy1.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy1);
        pushButton_7->setFont(font);

        gridLayout->addWidget(pushButton_7, 6, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 575, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pBtn_Quadrangle->setText(QApplication::translate("MainWindow", "\320\247\320\276\321\202\320\270\321\200\320\270\320\272\321\203\321\202\320\275\320\270\320\272", nullptr));
        pushButton_8->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        pBtn_Triangle->setText(QApplication::translate("MainWindow", "\320\242\321\200\320\270\320\272\321\203\321\202\320\275\320\270\320\272", nullptr));
        pBtn_Circle->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273\320\276", nullptr));
        pBtn_Calculator->setText(QApplication::translate("MainWindow", "\320\232\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
        pBtn_Vector->setText(QApplication::translate("MainWindow", "\320\237\321\200\321\217\320\274\320\260. \320\222\320\265\320\272\321\202\320\276\321\200", nullptr));
        pBtn_Polygon->setText(QApplication::translate("MainWindow", "\320\221\320\260\320\263\320\260\321\202\320\276\320\272\321\203\321\202\320\275\320\270\320\272", nullptr));
        pushButton_7->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
