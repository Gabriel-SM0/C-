#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_button1_clicked()
{
    //ui->teladig->text().toFloat(NULL);
    //ui->teladig->clear();
     ui->teladig->setText(ui->teladig->text()+QString("%1").arg("1"));
}


void Widget::on_button2_clicked()
{
    //ui->teladig->clear();
    ui->teladig->setText(ui->teladig->text() + QString("%1").arg("2"));
}

void Widget::on_button3_clicked()
{
    // ui->teladig->clear();
    ui->teladig->setText(ui->teladig->text() + QString("%1").arg("3"));
}


void Widget::on_button4_clicked()
{
    //ui->teladig->clear();
    ui->teladig->setText(ui->teladig->text() + QString("%1").arg("4"));
}

void Widget::on_button5_clicked()
{
       // ui->teladig->clear();
    ui->teladig->setText(ui->teladig->text() + QString("%1").arg("5"));
}


void Widget::on_button6_clicked()
{
       // ui->teladig->clear();
    ui->teladig->setText(ui->teladig->text() + QString("%1").arg("6"));
}


void Widget::on_button7_clicked()
{
        //ui->teladig->clear();
    ui->teladig->setText(ui->teladig->text() + QString("%1").arg("7"));
}


void Widget::on_button8_clicked()
{
        //ui->teladig->clear();
    ui->teladig->setText(ui->teladig->text() + QString("%1").arg("8"));
}


void Widget::on_button9_clicked()
{
        //ui->teladig->clear();
    ui->teladig->setText(ui->teladig->text()+ QString("%1").arg("9"));
}


void Widget::on_button0_clicked()
{
        //ui->teladig->clear();
    ui->teladig->setText(ui->teladig->text() + QString("%1").arg("0"));
}


void Widget::on_pushButton_Clear_clicked()
{
    ui->teladig->clear();
}


void Widget::on_pushButton_ENTER_clicked()
{
    //implementar o empilhamento
    pilhaDaCalculadora.push(ui->teladig->text().toFloat(NULL));
    ui->teladig->clear();
    //A seguir criei uma regra para que o programa pule a linha apenas após a primeira vez
    if (auxiliarDaTela!=0)
    {
    ui->telaPrincipal->setText(ui->telaPrincipal->toPlainText() + QString("%1").arg("\n") + QString("%1").arg(pilhaDaCalculadora.top()));
    auxiliarDapilha++;
    auxiliarDeRolagem++;
    }
    else
    {
        ui->telaPrincipal->setText(ui->telaPrincipal->toPlainText() + QString("%1").arg(pilhaDaCalculadora.top()));
        auxiliarDaTela++;
        auxiliarDapilha++;
        auxiliarDeRolagem++;
    }
    //ui->lineEdit->setText(QString("%1").arg(contadorDeChamadas));

}



void Widget::on_pushButton_dell_clicked()
{
    if (auxiliarDapilha>0)
    {
    pilhaDaCalculadora.pop();
    auxiliarDapilha--;
    auxiliarDeRolagem--;
    reescreveATela();
    }
    if (auxiliarDapilha==0)
    {
     ui->telaPrincipal->clear();

    }

}



void Widget::on_pushButton_sum_clicked()
{
    if (auxiliarDapilha>1)
    {
   resultado=pilhaDaCalculadora.at(auxiliarDapilha-1)+pilhaDaCalculadora.at(auxiliarDapilha-2);
   pilhaDaCalculadora.pop();
   pilhaDaCalculadora.pop();
   pilhaDaCalculadora.push(resultado);
   //reescrever a tela;
   auxiliarDapilha--;
   auxiliarDeRolagem--;
   reescreveATela();
    }
    else
    {
      ui->teladig->setText(QString("%1").arg("Poucos argumentos"));
    }
}


void Widget::on_pushButton_down_clicked()
{
   // ui->telaPrincipal->scroll(0,-5);
    //ui->telaPrincipal->scrollContentsBy(0,-5);
}


void Widget::on_pushButton_Rol_clicked()
{
    if (auxiliarDapilha>1)
    {
    float ultimo, penultimo;
    ultimo=pilhaDaCalculadora.top();
    penultimo=pilhaDaCalculadora.at(auxiliarDapilha-2);
    pilhaDaCalculadora.pop();
    pilhaDaCalculadora.pop();
    pilhaDaCalculadora.push(ultimo);
    pilhaDaCalculadora.push(penultimo);
    reescreveATela();
    }
    else
    {
    ui->teladig->setText(QString("%1").arg("Poucos argumentos"));
    }

}


void Widget::on_pushButton_up_clicked()
{
    //auxiliarDeRolagem--;
    //ui->telaPrincipal->ScrollBar.move;

}


void Widget::reescreveATela()
    {
    int a=0;
    auxiliarDaTela=0;
    while (a<auxiliarDapilha)
        {
        if (auxiliarDaTela!=0)
        {
            ui->telaPrincipal->setText(ui->telaPrincipal->toPlainText() + QString("%1").arg("\n") + QString("%1").arg(pilhaDaCalculadora.at(a)));

            }
            else
            {
                ui->telaPrincipal->setText(QString("%1").arg(pilhaDaCalculadora.at(a)));
                auxiliarDaTela++;
            }
                a++;

         }
}

void Widget::on_pushButton_subtraction_clicked()
{
    if (auxiliarDapilha>1)
    {
    resultado=pilhaDaCalculadora.at(auxiliarDapilha-1)-pilhaDaCalculadora.at(auxiliarDapilha-2);
    pilhaDaCalculadora.pop();
    pilhaDaCalculadora.pop();
    pilhaDaCalculadora.push(resultado);
    //reescrever a tela;
    auxiliarDapilha--;
    auxiliarDeRolagem--;
    reescreveATela();
    }
    else
    {
            ui->teladig->setText(QString("%1").arg("Poucos argumentos"));
    }
}


void Widget::on_pushButton_multiplication_clicked()
{
    if (auxiliarDapilha>1)
    {
    resultado=pilhaDaCalculadora.at(auxiliarDapilha-1)*pilhaDaCalculadora.at(auxiliarDapilha-2);
    //ui->lineEdit->setText(QString("%1").arg(pilhaDaCalculadora.at(0)));
    pilhaDaCalculadora.pop();
    pilhaDaCalculadora.pop();
    pilhaDaCalculadora.push(resultado);
    //reescrever a tela;
    auxiliarDapilha--;
    auxiliarDeRolagem--;
    reescreveATela();
    }
    else
    {
            ui->teladig->setText(QString("%1").arg("Poucos argumentos"));
    }
}


void Widget::on_pushButton_division_clicked()
{

        if (auxiliarDapilha>1)
        {
            if (pilhaDaCalculadora.at(auxiliarDapilha-2)==0)
            {
                ui->teladig->setText(QString("%1").arg("Error:Div zero"));
            }
            else
            {
            resultado=pilhaDaCalculadora.at(auxiliarDapilha-1)/pilhaDaCalculadora.at(auxiliarDapilha-2);
            pilhaDaCalculadora.pop();
            pilhaDaCalculadora.pop();
            pilhaDaCalculadora.push(resultado);
            auxiliarDapilha--;
            auxiliarDeRolagem--;
            reescreveATela();
            }
        }
        else
        {
       ui->teladig->setText(QString("%1").arg("Poucos argumentos"));
        }
   // }
}

