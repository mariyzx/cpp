// Questão 1: Apresente como exemplo em C++ uma classe em que tenhamos a utilização de um
// construtor, um destruidor, assim como a utilização das funções new e delete.

#include <iostream>

using namespace std;

void apresentacao(void);

class Exemplo {
  int* x;

  public:
    Exemplo() {
      x = new int;
      cout<<"Construtor!!"<<endl;
    }

    ~Exemplo() {
      delete x;
      cout<<"Destrutor!!"<<endl;
    }

    void setX(int val) {
      *x = val;
    }

    int getX() {
      return *x;
    }
};

int main() {
  apresentacao();
  Exemplo* valor = new Exemplo();

  valor->setX(2);
  cout<<"O valor de x é: "<<valor->getX()<<endl;

  delete valor;
}

void apresentacao(void){
  cout<<endl<<endl;
  cout<<"   **********************************"<<endl;
  cout<<"     UFRRJ"<<endl;
  cout<<"     IM - DTL"<<endl;
  cout<<"     Bacharelado em Matematica Aplicada e Computacional"<<endl;
  cout<<"     Mariana Werneck"<<endl;
  cout<<"   **********************************"<<endl;
  cout<<endl<<endl;
}