#ifndef RETANGULO_H
#define RETANGULO_H


class Retangulo
{
public: //parâmetros, os dados, as variaveis
    float ponto1[1][2];
    float ponto2[1][2];
    float ponto3[1][2];
    float ponto4[1][2];
    float comprimento;
    float largura;
    float perimetro;
    float area;

    //atributos, funções que acessam a variavel
public:
    Retangulo();
    Retangulo (float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8);
    void setPonto1 (float p1);
    void setPonto2 (float p2);
    void setPonto3 (float p3);
    void setPonto4 (float p4);
    void setPonto5 (float p5);
    void setPonto6 (float p6);
    void setPonto7 (float p7);
    void setPonto8 (float p8);

    float getcomprimento(void);
    float getlargura(void);
    float getperimetro(void);
    float getarea(void);


};

#endif // RETANGULO_H
