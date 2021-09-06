/********************************************************************************
** Form generated from reading UI file 'janela_principal.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELA_PRINCIPAL_H
#define UI_JANELA_PRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Janela_principal
{
public:
    QWidget *centralwidget;
    QPushButton *BT_Subtracao;
    QPushButton *BT_soma;
    QPushButton *BT_multiplicacao;
    QPushButton *BT_divisao;
    QLineEdit *Operando_1;
    QLineEdit *Operando_2;
    QLineEdit *Resultado;
    QLabel *label;
    QPushButton *Ativa_soma;
    QPushButton *Desativa_soma;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Janela_principal)
    {
        if (Janela_principal->objectName().isEmpty())
            Janela_principal->setObjectName(QString::fromUtf8("Janela_principal"));
        Janela_principal->resize(440, 341);
        centralwidget = new QWidget(Janela_principal);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        BT_Subtracao = new QPushButton(centralwidget);
        BT_Subtracao->setObjectName(QString::fromUtf8("BT_Subtracao"));
        BT_Subtracao->setGeometry(QRect(120, 160, 93, 28));
        BT_soma = new QPushButton(centralwidget);
        BT_soma->setObjectName(QString::fromUtf8("BT_soma"));
        BT_soma->setGeometry(QRect(20, 160, 93, 28));
        BT_multiplicacao = new QPushButton(centralwidget);
        BT_multiplicacao->setObjectName(QString::fromUtf8("BT_multiplicacao"));
        BT_multiplicacao->setGeometry(QRect(220, 160, 93, 28));
        BT_divisao = new QPushButton(centralwidget);
        BT_divisao->setObjectName(QString::fromUtf8("BT_divisao"));
        BT_divisao->setGeometry(QRect(320, 160, 93, 28));
        Operando_1 = new QLineEdit(centralwidget);
        Operando_1->setObjectName(QString::fromUtf8("Operando_1"));
        Operando_1->setGeometry(QRect(10, 80, 113, 22));
        Operando_2 = new QLineEdit(centralwidget);
        Operando_2->setObjectName(QString::fromUtf8("Operando_2"));
        Operando_2->setGeometry(QRect(130, 80, 113, 22));
        Resultado = new QLineEdit(centralwidget);
        Resultado->setObjectName(QString::fromUtf8("Resultado"));
        Resultado->setGeometry(QRect(310, 80, 113, 22));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(270, 80, 21, 20));
        Ativa_soma = new QPushButton(centralwidget);
        Ativa_soma->setObjectName(QString::fromUtf8("Ativa_soma"));
        Ativa_soma->setGeometry(QRect(40, 220, 141, 28));
        Desativa_soma = new QPushButton(centralwidget);
        Desativa_soma->setObjectName(QString::fromUtf8("Desativa_soma"));
        Desativa_soma->setGeometry(QRect(250, 220, 141, 28));
        Janela_principal->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Janela_principal);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 440, 26));
        Janela_principal->setMenuBar(menubar);
        statusbar = new QStatusBar(Janela_principal);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Janela_principal->setStatusBar(statusbar);

        retranslateUi(Janela_principal);

        QMetaObject::connectSlotsByName(Janela_principal);
    } // setupUi

    void retranslateUi(QMainWindow *Janela_principal)
    {
        Janela_principal->setWindowTitle(QCoreApplication::translate("Janela_principal", "Janela_principal", nullptr));
        BT_Subtracao->setText(QCoreApplication::translate("Janela_principal", "-", nullptr));
        BT_soma->setText(QCoreApplication::translate("Janela_principal", "+", nullptr));
        BT_multiplicacao->setText(QCoreApplication::translate("Janela_principal", "X", nullptr));
        BT_divisao->setText(QCoreApplication::translate("Janela_principal", "/", nullptr));
        label->setText(QCoreApplication::translate("Janela_principal", "=", nullptr));
        Ativa_soma->setText(QCoreApplication::translate("Janela_principal", "Ativa_soma", nullptr));
        Desativa_soma->setText(QCoreApplication::translate("Janela_principal", "Desativa_soma", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Janela_principal: public Ui_Janela_principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELA_PRINCIPAL_H
