#include "Retangulo.h"

Retangulo::Retangulo()
{
    setPonto1(0);
    setPonto2(0);
    setPonto3(0);
    setPonto3(0);
    setPonto4(0);
    setPonto5(0);
    setPonto6(0);
    setPonto7(0);

}


Retangulo::Retangulo (float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8)
{
    setPonto1(p1);
    setPonto2(p2);
    setPonto3(p3);
    setPonto4(p4);
    setPonto5(p5);
    setPonto6(p6);
    setPonto7(p7);
    setPonto8(p8);

}
//////////////////////////////FUNÇÕES E FILTROS///////////////////////////
void Retangulo::setPonto1 (float p1)
{
    if (p1 < 0)
        ponto1[0][0]=0;
    else if (p1 > 20)
        ponto1[0][0]=20;
    else
        ponto1[0][0]=p1;

}
void Retangulo::setPonto2 (float p2)
{
    if (p2 < 0)
        ponto1[0][1]=0;
    else if (p2 > 20)
        ponto1[0][1]=20;
    else
        ponto1[0][1]=p2;

}
void Retangulo::setPonto3 (float p3)
{
    if (p3 < 0)
        ponto2[0][0]=0;
    else if (p3 > 20)
        ponto2[0][0]=20;
    else
        ponto2[0][0]=p3;

}
void Retangulo::setPonto4 (float p4)
{
    if (p4 < 0)
        ponto2[0][1]=0;
    else if (p4 > 20)
        ponto2[0][1]=20;
    else
        ponto2[0][1]=p4;

}

void Retangulo::setPonto5 (float p5)
{
    if (p5 < 0)
        ponto3[0][0]=0;
    else if (p5 > 20)
        ponto3[0][0]=20;
    else
        ponto3[0][0]=p5;

}
void Retangulo::setPonto6 (float p6)
{
    if (p6 < 0)
        ponto3[0][1]=0;
    else if (p6 > 20)
        ponto3[0][1]=20;
    else
        ponto3[0][1]=p6;

}
void Retangulo::setPonto7 (float p7)
{
    if (p7 < 0)
        ponto4[0][0]=0;
    else if (p7 > 20)
        ponto4[0][0]=20;
    else
        ponto4[0][0]=p7;

}

void Retangulo::setPonto8 (float p8)
{
    if (p8 < 0)
        ponto4[0][1]=0;
    else if (p8 > 20)
        ponto4[0][1]=20;
    else
        ponto4[0][1]=p8;

}
/////////////////////Contas e saidas//////////////

float Retangulo::getcomprimento(void)
{
    comprimento=ponto2[0][0]-ponto1[0][0];
    return comprimento;
}
float Retangulo::getlargura(void)
{
    largura=ponto1[0][1]-ponto3[0][1];
return largura;
}
float Retangulo::getperimetro(void)

{
    perimetro=1;
return perimetro;
}

float Retangulo::getarea(void)
{
    area=(ponto4[0][0]-ponto3[0][0])*(ponto1[0][1]-ponto3[0][1]);
    return area;
}




