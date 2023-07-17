// Questão 2: Apresente em C++ exemplos de conversões entre classes, através de uma função
// construtora e de uma função conversora.

#include <iostream>

using namespace std;

void apresentacao(void);

class TClassA {
  public:
    int x;

  TClassA() {
    x = 0;
  };
  
  TClassA(int a) {
    x = a;
  };
};

class TClassB {
  public:
    float x;

  TClassB() {
    x = 0;
  };
  
  TClassB(float a) {
    x = a;
  };

  TClassA converte() {
    return TClassA(x);
  }

  operator TClassA() {
    return TClassA(x);
  }
};

int main() {
  apresentacao();
  TClassB objetoB(42);
  TClassA objetoA1 = objetoB.converte();
  TClassA objetoA2 = objetoB;

  std::cout << "Valor de objetoB: " << objetoB.x << std::endl;

};

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