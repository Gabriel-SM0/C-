#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QStack>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    QStack<float> pilhaDaCalculadora;//LIFO da pilha da calculadora;
    int auxiliarDaTela=0; //Serve para fazer a tela principal não pular a primeira linha
    int auxiliarDapilha=0; //auxilia a pilha, contando quantos valores tem nela, isso me ajuda a reescrever a tela quando precisar apagar o último valor.
    int auxiliarDeRolagem=0;//Serve para navegar pela pilha
    float resultado;
private slots:
    void on_button1_clicked();

    void on_button2_clicked();

    void on_button3_clicked();

    void on_button4_clicked();

    void on_button5_clicked();

    void on_button6_clicked();

    void on_button7_clicked();

    void on_button8_clicked();

    void on_button9_clicked();

    void on_button0_clicked();

    void on_pushButton_Clear_clicked();

    void on_pushButton_ENTER_clicked();

    void on_pushButton_dell_clicked();

    void on_pushButton_sum_clicked();

    void on_pushButton_down_clicked();

    void on_pushButton_Rol_clicked();

    void on_pushButton_up_clicked();

    void reescreveATela();

    void on_pushButton_subtraction_clicked();

    void on_pushButton_multiplication_clicked();

    void on_pushButton_division_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
