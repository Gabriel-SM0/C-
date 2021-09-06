#include <iostream>
#include "Retangulo.h"

using namespace std;

int main()
{


    Retangulo teste1(0,20,20,20,0,0,20,0);

    cout << "pt1-----------pt2" << endl;
    cout << "|             |" << endl;
    cout << "|             |" << endl;
    cout << "|             |" << endl;
    cout << "|             |" << endl;
    cout << "pt3-----------pt4" << endl;
    cout << endl;


    cout << "Area =" << teste1.getarea() << endl;
    cout << "Comprimento=" << teste1.getcomprimento() << endl;
    cout << "Perimetro eu fiquei com preguica de fazer a formula=" << teste1.getperimetro() << endl;
    cout << "Lagura=" << teste1.getlargura() << endl;

//TESTES E MAIS TESTES PRA DESCOBRIR POSSIVEIS ERROS
//cout <<teste1.ponto1[0][1]-teste1.ponto3[0][1] <<endl;


    /*
    cout <<teste1.getlargura() << endl;
    cout <<teste1.ponto1[0][0] << endl;
    cout <<teste1.ponto1[0][1] << endl;
    cout <<teste1.ponto2[0][0] << endl;
    cout <<teste1.ponto2[0][1] << endl;
    cout <<teste1.ponto3[0][0] << endl;
    cout <<teste1.ponto3[0][1] << endl;
    cout <<teste1.ponto4[0][0] << endl;
    cout <<teste1.ponto4[0][1] << endl;

    */
    return 0;
}


// cout << "Hello world!" << endl;
//return 0;
