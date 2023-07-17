// Questão 1: Desenvolva em C++ a classe TNumComplexo, com os dados float real e imag,
// que possibilite a conversão de um float x a um objeto TNumComplexo, atribuindo a Real o
// valor de x, e que possibilite a conversão de um objeto TNumComplexo a um float x, atribuindo
// a x o valor de Real.

#include <iostream>

using namespace std;

void apresentacao(void);

class TNumComplexo {
  public:
    float real, imag;
  
  TNumComplexo() {
    real = 0;
    imag = 0;
  };

  TNumComplexo(float a) {
    real = a;
    imag = 0;
  };

  operator float() {
    return real;
  }
};

int main() {
  apresentacao();
  // conversao de float à TNumComplexo
  float x = 3.15;
  TNumComplexo nc1;
  nc1.real = x;
  cout<<nc1.real<< " e "<< nc1.imag<<endl;
  
  //conversao de TNumComplexo à float
  TNumComplexo nc2;
  nc2.imag = 2;
  nc2.real = 3;
  float convertedComplex = nc2;

  cout<<convertedComplex<<endl;
}

void apresentacao(void){
  cout<<endl<<endl;
  cout<<"   **********************************"<<endl;
  cout<<"     UFRRJ"<<endl;
  cout<<"     IM - DTL"<<endl;
  cout<<"     Bacharelado em Matematica Aplicada e Computacional"<<endl;
  cout<<"     Aluna: Mariana Werneck"<<endl;
  cout<<"     Matrícula: 20200031381"<<endl;
  cout<<"   **********************************"<<endl;
  cout<<endl<<endl;
}