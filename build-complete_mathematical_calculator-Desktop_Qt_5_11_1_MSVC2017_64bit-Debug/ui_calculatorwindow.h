/********************************************************************************
** Form generated from reading UI file 'calculatorwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATORWINDOW_H
#define UI_CALCULATORWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CalculatorWindow
{
public:
    QLabel *label;
    QPushButton *pBtn_1;
    QPushButton *pBtn_3;
    QPushButton *pBtn_subtract;
    QPushButton *pBtn_cos;
    QPushButton *pBtn_0;
    QPushButton *pBtn_add;
    QPushButton *pBtn_point;
    QPushButton *pBtn_equals;
    QPushButton *pBtn_2;
    QPushButton *pBtn_Pi;
    QPushButton *pBtn_4;
    QPushButton *pBtn_5;
    QPushButton *pBtn_6;
    QPushButton *pBtn_nFactorial;
    QPushButton *pBtn_7;
    QPushButton *pBtn_AC;
    QPushButton *pBtn_9;
    QPushButton *pBtn_multiply;
    QPushButton *pBtn_8;
    QPushButton *pBtn_interest;
    QPushButton *pBtn_share;
    QPushButton *pBtn_plusOrMinus;
    QPushButton *pBtn_sin;
    QPushButton *pBtn_log;
    QPushButton *pBtn_clearOne;
    QPushButton *pBtn_exp;
    QPushButton *pBtn_tan;
    QPushButton *pBtn_power;
    QPushButton *pBtn_root;

    void setupUi(QDialog *CalculatorWindow)
    {
        if (CalculatorWindow->objectName().isEmpty())
            CalculatorWindow->setObjectName(QStringLiteral("CalculatorWindow"));
        CalculatorWindow->resize(300, 322);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CalculatorWindow->sizePolicy().hasHeightForWidth());
        CalculatorWindow->setSizePolicy(sizePolicy);
        label = new QLabel(CalculatorWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 300, 70));
        QFont font;
        font.setPointSize(25);
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pBtn_1 = new QPushButton(CalculatorWindow);
        pBtn_1->setObjectName(QStringLiteral("pBtn_1"));
        pBtn_1->setGeometry(QRect(50, 220, 50, 50));
        sizePolicy.setHeightForWidth(pBtn_1->sizePolicy().hasHeightForWidth());
        pBtn_1->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(20);
        pBtn_1->setFont(font1);
        pBtn_3 = new QPushButton(CalculatorWindow);
        pBtn_3->setObjectName(QStringLiteral("pBtn_3"));
        pBtn_3->setGeometry(QRect(150, 220, 50, 50));
        sizePolicy.setHeightForWidth(pBtn_3->sizePolicy().hasHeightForWidth());
        pBtn_3->setSizePolicy(sizePolicy);
        pBtn_3->setFont(font1);
        pBtn_subtract = new QPushButton(CalculatorWindow);
        pBtn_subtract->setObjectName(QStringLiteral("pBtn_subtract"));
        pBtn_subtract->setGeometry(QRect(200, 270, 50, 50));
        sizePolicy.setHeightForWidth(pBtn_subtract->sizePolicy().hasHeightForWidth());
        pBtn_subtract->setSizePolicy(sizePolicy);
        pBtn_subtract->setFont(font1);
        pBtn_subtract->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pBtn_cos = new QPushButton(CalculatorWindow);
        pBtn_cos->setObjectName(QStringLiteral("pBtn_cos"));
        pBtn_cos->setGeometry(QRect(50, 70, 50, 50));
        sizePolicy.setHeightForWidth(pBtn_cos->sizePolicy().hasHeightForWidth());
        pBtn_cos->setSizePolicy(sizePolicy);
        pBtn_cos->setFont(font1);
        pBtn_cos->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(255, 151, 157);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pBtn_0 = new QPushButton(CalculatorWindow);
        pBtn_0->setObjectName(QStringLiteral("pBtn_0"));
        pBtn_0->setGeometry(QRect(100, 270, 50, 50));
        sizePolicy.setHeightForWidth(pBtn_0->sizePolicy().hasHeightForWidth());
        pBtn_0->setSizePolicy(sizePolicy);
        pBtn_0->setFont(font1);
        pBtn_add = new QPushButton(CalculatorWindow);
        pBtn_add->setObjectName(QStringLiteral("pBtn_add"));
        pBtn_add->setGeometry(QRect(200, 220, 50, 50));
        sizePolicy.setHeightForWidth(pBtn_add->sizePolicy().hasHeightForWidth());
        pBtn_add->setSizePolicy(sizePolicy);
        pBtn_add->setFont(font1);
        pBtn_add->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pBtn_point = new QPushButton(CalculatorWindow);
        pBtn_point->setObjectName(QStringLiteral("pBtn_point"));
        pBtn_point->setGeometry(QRect(150, 270, 50, 50));
        sizePolicy.setHeightForWidth(pBtn_point->sizePolicy().hasHeightForWidth());
        pBtn_point->setSizePolicy(sizePolicy);
        pBtn_point->setFont(font1);
        pBtn_point->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(25, 251, 157);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pBtn_equals = new QPushButton(CalculatorWindow);
        pBtn_equals->setObjectName(QStringLiteral("pBtn_equals"));
        pBtn_equals->setGeometry(QRect(250, 270, 50, 50));
        sizePolicy.setHeightForWidth(pBtn_equals->sizePolicy().hasHeightForWidth());
        pBtn_equals->setSizePolicy(sizePolicy);
        pBtn_equals->setFont(font1);
        pBtn_equals->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(25, 151, 100);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pBtn_2 = new QPushButton(CalculatorWindow);
        pBtn_2->setObjectName(QStringLiteral("pBtn_2"));
        pBtn_2->setGeometry(QRect(100, 220, 50, 50));
        sizePolicy.setHeightForWidth(pBtn_2->sizePolicy().hasHeightForWidth());
        pBtn_2->setSizePolicy(sizePolicy);
        pBtn_2->setFont(font1);
        pBtn_Pi = new QPushButton(CalculatorWindow);
        pBtn_Pi->setObjectName(QStringLiteral("pBtn_Pi"));
        pBtn_Pi->setGeometry(QRect(0, 220, 50, 50));
        sizePolicy.setHeightForWidth(pBtn_Pi->sizePolicy().hasHeightForWidth());
        pBtn_Pi->setSizePolicy(sizePolicy);
        pBtn_Pi->setFont(font1);
        pBtn_Pi->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(255, 151, 157);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pBtn_4 = new QPushButton(CalculatorWindow);
        pBtn_4->setObjectName(QStringLiteral("pBtn_4"));
        pBtn_4->setGeometry(QRect(50, 170, 50, 50));
        sizePolicy.setHeightForWidth(pBtn_4->sizePolicy().hasHeightForWidth());
        pBtn_4->setSizePolicy(sizePolicy);
        pBtn_4->setFont(font1);
        pBtn_5 = new QPushButton(CalculatorWindow);
        pBtn_5->setObjectName(QStringLiteral("pBtn_5"));
        pBtn_5->setGeometry(QRect(100, 170, 50, 50));
        sizePolicy.setHeightForWidth(pBtn_5->sizePolicy().hasHeightForWidth());
        pBtn_5->setSizePolicy(sizePolicy);
        pBtn_5->setFont(font1);
        pBtn_6 = new QPushButton(CalculatorWindow);
        pBtn_6->setObjectName(QStringLiteral("pBtn_6"));
        pBtn_6->setGeometry(QRect(150, 170, 50, 50));
        sizePolicy.setHeightForWidth(pBtn_6->sizePolicy().hasHeightForWidth());
        pBtn_6->setSizePolicy(sizePolicy);
        pBtn_6->setFont(font1);
        pBtn_nFactorial = new QPushButton(CalculatorWindow);
        pBtn_nFactorial->setObjectName(QStringLiteral("pBtn_nFactorial"));
        pBtn_nFactorial->setGeometry(QRect(0, 170, 50, 50));
        sizePolicy.setHeightForWidth(pBtn_nFactorial->sizePolicy().hasHeightForWidth());
        pBtn_nFactorial->setSizePolicy(sizePolicy);
        pBtn_nFactorial->setFont(font1);
        pBtn_nFactorial->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(255, 151, 157);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pBtn_7 = new QPushButton(CalculatorWindow);
        pBtn_7->setObjectName(QStringLiteral("pBtn_7"));
        pBtn_7->setGeometry(QRect(50, 120, 50, 50));
        sizePolicy.setHeightForWidth(pBtn_7->sizePolicy().hasHeightForWidth());
        pBtn_7->setSizePolicy(sizePolicy);
        pBtn_7->setFont(font1);
        pBtn_AC = new QPushButton(CalculatorWindow);
        pBtn_AC->setObjectName(QStringLiteral("pBtn_AC"));
        pBtn_AC->setGeometry(QRect(200, 70, 50, 50));
        sizePolicy.setHeightForWidth(pBtn_AC->sizePolicy().hasHeightForWidth());
        pBtn_AC->setSizePolicy(sizePolicy);
        pBtn_AC->setFont(font1);
        pBtn_AC->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(255, 15, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pBtn_9 = new QPushButton(CalculatorWindow);
        pBtn_9->setObjectName(QStringLiteral("pBtn_9"));
        pBtn_9->setGeometry(QRect(150, 120, 50, 50));
        sizePolicy.setHeightForWidth(pBtn_9->sizePolicy().hasHeightForWidth());
        pBtn_9->setSizePolicy(sizePolicy);
        pBtn_9->setFont(font1);
        pBtn_multiply = new QPushButton(CalculatorWindow);
        pBtn_multiply->setObjectName(QStringLiteral("pBtn_multiply"));
        pBtn_multiply->setGeometry(QRect(200, 170, 50, 50));
        sizePolicy.setHeightForWidth(pBtn_multiply->sizePolicy().hasHeightForWidth());
        pBtn_multiply->setSizePolicy(sizePolicy);
        pBtn_multiply->setFont(font1);
        pBtn_multiply->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pBtn_8 = new QPushButton(CalculatorWindow);
        pBtn_8->setObjectName(QStringLiteral("pBtn_8"));
        pBtn_8->setGeometry(QRect(100, 120, 50, 50));
        sizePolicy.setHeightForWidth(pBtn_8->sizePolicy().hasHeightForWidth());
        pBtn_8->setSizePolicy(sizePolicy);
        pBtn_8->setFont(font1);
        pBtn_interest = new QPushButton(CalculatorWindow);
        pBtn_interest->setObjectName(QStringLiteral("pBtn_interest"));
        pBtn_interest->setGeometry(QRect(200, 120, 50, 50));
        sizePolicy.setHeightForWidth(pBtn_interest->sizePolicy().hasHeightForWidth());
        pBtn_interest->setSizePolicy(sizePolicy);
        pBtn_interest->setFont(font1);
        pBtn_interest->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pBtn_share = new QPushButton(CalculatorWindow);
        pBtn_share->setObjectName(QStringLiteral("pBtn_share"));
        pBtn_share->setGeometry(QRect(250, 120, 50, 50));
        sizePolicy.setHeightForWidth(pBtn_share->sizePolicy().hasHeightForWidth());
        pBtn_share->setSizePolicy(sizePolicy);
        pBtn_share->setFont(font1);
        pBtn_share->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pBtn_plusOrMinus = new QPushButton(CalculatorWindow);
        pBtn_plusOrMinus->setObjectName(QStringLiteral("pBtn_plusOrMinus"));
        pBtn_plusOrMinus->setGeometry(QRect(0, 270, 100, 50));
        sizePolicy.setHeightForWidth(pBtn_plusOrMinus->sizePolicy().hasHeightForWidth());
        pBtn_plusOrMinus->setSizePolicy(sizePolicy);
        pBtn_plusOrMinus->setFont(font1);
        pBtn_plusOrMinus->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(25, 251, 157);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pBtn_sin = new QPushButton(CalculatorWindow);
        pBtn_sin->setObjectName(QStringLiteral("pBtn_sin"));
        pBtn_sin->setGeometry(QRect(0, 70, 50, 50));
        sizePolicy.setHeightForWidth(pBtn_sin->sizePolicy().hasHeightForWidth());
        pBtn_sin->setSizePolicy(sizePolicy);
        pBtn_sin->setFont(font1);
        pBtn_sin->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(255, 151, 157);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pBtn_log = new QPushButton(CalculatorWindow);
        pBtn_log->setObjectName(QStringLiteral("pBtn_log"));
        pBtn_log->setGeometry(QRect(150, 70, 50, 50));
        sizePolicy.setHeightForWidth(pBtn_log->sizePolicy().hasHeightForWidth());
        pBtn_log->setSizePolicy(sizePolicy);
        pBtn_log->setFont(font1);
        pBtn_log->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(255, 151, 157);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pBtn_clearOne = new QPushButton(CalculatorWindow);
        pBtn_clearOne->setObjectName(QStringLiteral("pBtn_clearOne"));
        pBtn_clearOne->setGeometry(QRect(250, 70, 50, 50));
        sizePolicy.setHeightForWidth(pBtn_clearOne->sizePolicy().hasHeightForWidth());
        pBtn_clearOne->setSizePolicy(sizePolicy);
        pBtn_clearOne->setFont(font1);
        pBtn_clearOne->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(255, 15, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pBtn_exp = new QPushButton(CalculatorWindow);
        pBtn_exp->setObjectName(QStringLiteral("pBtn_exp"));
        pBtn_exp->setGeometry(QRect(0, 120, 50, 50));
        sizePolicy.setHeightForWidth(pBtn_exp->sizePolicy().hasHeightForWidth());
        pBtn_exp->setSizePolicy(sizePolicy);
        pBtn_exp->setFont(font1);
        pBtn_exp->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(255, 151, 157);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pBtn_tan = new QPushButton(CalculatorWindow);
        pBtn_tan->setObjectName(QStringLiteral("pBtn_tan"));
        pBtn_tan->setGeometry(QRect(100, 70, 50, 50));
        sizePolicy.setHeightForWidth(pBtn_tan->sizePolicy().hasHeightForWidth());
        pBtn_tan->setSizePolicy(sizePolicy);
        pBtn_tan->setFont(font1);
        pBtn_tan->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(255, 151, 157);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pBtn_power = new QPushButton(CalculatorWindow);
        pBtn_power->setObjectName(QStringLiteral("pBtn_power"));
        pBtn_power->setGeometry(QRect(250, 170, 50, 50));
        sizePolicy.setHeightForWidth(pBtn_power->sizePolicy().hasHeightForWidth());
        pBtn_power->setSizePolicy(sizePolicy);
        pBtn_power->setFont(font1);
        pBtn_power->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pBtn_root = new QPushButton(CalculatorWindow);
        pBtn_root->setObjectName(QStringLiteral("pBtn_root"));
        pBtn_root->setGeometry(QRect(250, 220, 50, 50));
        sizePolicy.setHeightForWidth(pBtn_root->sizePolicy().hasHeightForWidth());
        pBtn_root->setSizePolicy(sizePolicy);
        pBtn_root->setFont(font1);
        pBtn_root->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        retranslateUi(CalculatorWindow);

        QMetaObject::connectSlotsByName(CalculatorWindow);
    } // setupUi

    void retranslateUi(QDialog *CalculatorWindow)
    {
        CalculatorWindow->setWindowTitle(QApplication::translate("CalculatorWindow", "Dialog", nullptr));
        label->setText(QApplication::translate("CalculatorWindow", "0", nullptr));
        pBtn_1->setText(QApplication::translate("CalculatorWindow", "1", nullptr));
        pBtn_3->setText(QApplication::translate("CalculatorWindow", "3", nullptr));
        pBtn_subtract->setText(QApplication::translate("CalculatorWindow", "-", nullptr));
        pBtn_cos->setText(QApplication::translate("CalculatorWindow", "cos", nullptr));
        pBtn_0->setText(QApplication::translate("CalculatorWindow", "0", nullptr));
        pBtn_add->setText(QApplication::translate("CalculatorWindow", "+", nullptr));
        pBtn_point->setText(QApplication::translate("CalculatorWindow", ".", nullptr));
        pBtn_equals->setText(QApplication::translate("CalculatorWindow", "=", nullptr));
        pBtn_2->setText(QApplication::translate("CalculatorWindow", "2", nullptr));
        pBtn_Pi->setText(QApplication::translate("CalculatorWindow", "Pi", nullptr));
        pBtn_4->setText(QApplication::translate("CalculatorWindow", "4", nullptr));
        pBtn_5->setText(QApplication::translate("CalculatorWindow", "5", nullptr));
        pBtn_6->setText(QApplication::translate("CalculatorWindow", "6", nullptr));
        pBtn_nFactorial->setText(QApplication::translate("CalculatorWindow", "n!", nullptr));
        pBtn_7->setText(QApplication::translate("CalculatorWindow", "7", nullptr));
        pBtn_AC->setText(QApplication::translate("CalculatorWindow", "AC", nullptr));
        pBtn_9->setText(QApplication::translate("CalculatorWindow", "9", nullptr));
        pBtn_multiply->setText(QApplication::translate("CalculatorWindow", "x", nullptr));
        pBtn_8->setText(QApplication::translate("CalculatorWindow", "8", nullptr));
        pBtn_interest->setText(QApplication::translate("CalculatorWindow", "%", nullptr));
        pBtn_share->setText(QApplication::translate("CalculatorWindow", "\303\267", nullptr));
        pBtn_plusOrMinus->setText(QApplication::translate("CalculatorWindow", "+/-", nullptr));
        pBtn_sin->setText(QApplication::translate("CalculatorWindow", "sin", nullptr));
        pBtn_log->setText(QApplication::translate("CalculatorWindow", "log", nullptr));
        pBtn_clearOne->setText(QApplication::translate("CalculatorWindow", "<-", nullptr));
        pBtn_exp->setText(QApplication::translate("CalculatorWindow", "exp", nullptr));
        pBtn_tan->setText(QApplication::translate("CalculatorWindow", "tan", nullptr));
        pBtn_power->setText(QApplication::translate("CalculatorWindow", "^", nullptr));
        pBtn_root->setText(QApplication::translate("CalculatorWindow", "\342\210\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CalculatorWindow: public Ui_CalculatorWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATORWINDOW_H
