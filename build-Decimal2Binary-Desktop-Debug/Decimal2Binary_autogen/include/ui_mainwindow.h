/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DecimalToBinary
{
public:
    QWidget *centralwidget;
    QPushButton *enterButton;
    QLineEdit *decimalNum;
    QLabel *label;
    QLineEdit *Result;
    QLabel *label_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DecimalToBinary)
    {
        if (DecimalToBinary->objectName().isEmpty())
            DecimalToBinary->setObjectName("DecimalToBinary");
        DecimalToBinary->resize(646, 327);
        DecimalToBinary->setStyleSheet(QString::fromUtf8("DecimalToBinary{\n"
"	background-color: rgb(225, 240, 168);\n"
"\n"
"}"));
        centralwidget = new QWidget(DecimalToBinary);
        centralwidget->setObjectName("centralwidget");
        enterButton = new QPushButton(centralwidget);
        enterButton->setObjectName("enterButton");
        enterButton->setGeometry(QRect(260, 130, 93, 29));
        enterButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"font: 700 9pt \"Georgia\";\n"
"background-color: rgb(84, 95, 255);\n"
"color: white;\n"
"border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: rgb(149, 190, 255);\n"
"}"));
        decimalNum = new QLineEdit(centralwidget);
        decimalNum->setObjectName("decimalNum");
        decimalNum->setGeometry(QRect(180, 60, 261, 41));
        decimalNum->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	border-radius: 3px;\n"
"}"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 60, 121, 31));
        Result = new QLineEdit(centralwidget);
        Result->setObjectName("Result");
        Result->setGeometry(QRect(180, 180, 261, 41));
        Result->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"border-radius: 3px;\n"
"}"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(52, 190, 101, 20));
        DecimalToBinary->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(DecimalToBinary);
        statusbar->setObjectName("statusbar");
        DecimalToBinary->setStatusBar(statusbar);

        retranslateUi(DecimalToBinary);

        QMetaObject::connectSlotsByName(DecimalToBinary);
    } // setupUi

    void retranslateUi(QMainWindow *DecimalToBinary)
    {
        DecimalToBinary->setWindowTitle(QCoreApplication::translate("DecimalToBinary", "MainWindow", nullptr));
        enterButton->setText(QCoreApplication::translate("DecimalToBinary", "Enter", nullptr));
        label->setText(QCoreApplication::translate("DecimalToBinary", "Decimal number ", nullptr));
        label_2->setText(QCoreApplication::translate("DecimalToBinary", "Binary number", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DecimalToBinary: public Ui_DecimalToBinary {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
