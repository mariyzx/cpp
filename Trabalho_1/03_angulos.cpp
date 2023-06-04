// Questão 1: Apresente um programa em C++ que contenha uma classe para a representação de
// ângulos. Nesta classe, defina os atributos grau, minuto e segundo como privados e
// apresente métodos públicos para acessarmos e para modificarmos os atributos. Apresente dois
// construtores que inicializam os atributos e apresente o método Soma, para a soma de dois
// ângulos.

#include <iostream>

using namespace std;

void apresentacao(void);

class Angulos {
  int grau, minuto, segundo;
  public:
    //getters
    int getGrau(void) {
      return grau;
    }
    int getMinuto(void) {
      return minuto;
    }
    int getSegundo(void) {
      return segundo;
    }

    //setters
    void setGrau(int g) {
      grau = g;
    }
    void setMinuto(int m) {
      minuto = m;
    }
    void setSegundo(int s) {
      segundo = s;
    }

    Angulos() {
      // esse construtor inicializa os atributos com valores padrão
      grau = 0;
      minuto = 0;
      segundo = 0;
    }

    Angulos(int g, int m, int s) {
      // esse construtor inicializa com valores específicos;
        grau = g;
        minuto = m;
        segundo = s;
    }

    Angulos soma(Angulos ang2) {
      Angulos resultado;

      resultado.segundo = segundo + ang2.segundo;
      resultado.minuto = minuto + ang2.minuto + resultado.segundo / 60;
      resultado.grau = grau + ang2.grau + resultado.minuto / 60;

      resultado.segundo %= 60;
      resultado.minuto %= 60;

      return resultado;
    }
};

int main() {
  Angulos ang1(45, 30, 15), ang2(30, 15, 45);

  Angulos resultado = ang1.soma(ang2);

  cout<<resultado.getGrau()<<" graus"<<endl;
  cout<<resultado.getMinuto()<<" minutos"<<endl;
  cout<<resultado.getSegundo()<<" segundos"<<endl;

  apresentacao();
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