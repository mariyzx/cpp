// Questão 1: Desenvolva a classe Ponto, com os dados float x, y, e com os métodos void
// entradaDeDados(void) e void impressaoDeDados(void), para a definição dos
// valores de x e de y e para a impressão dos valores de x e de y, respectivamente.

#include <iostream>

using namespace std;

void apresentacao(void);

class Ponto {
  public:
    float x,y;
    void entradaDeDados(void);
    void impressaoDeDados(void);
};

int main() {
  Ponto ponto;
  ponto.entradaDeDados();
  ponto.impressaoDeDados();
}


void Ponto::entradaDeDados(void) {
  cout<<"Insira o valor de x:"<<endl;
  cin>>x;
  cout<<"Insira o valor de y:"<<endl;
  cin>>y;
}

void Ponto::impressaoDeDados(void) {
  cout<<"O valor de x é "<<x<<" e o valor de y é "<<y<<"!"<<endl;
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