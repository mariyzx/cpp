// Questão 1: Desenvolva em C++ a classe TTempo, com os dados int hora, min, seg, e com
// uma sobrecarga do operador ++ (prefixado), o qual incrementa em uma unidade o valor de
// hora.

#include <iostream>

using namespace std;

void apresentacao(void);

class TTempo {
  public:
    int hora, min, seg;

  TTempo () {
    hora = 0;
    min = 0;
    seg = 0;
  }

  TTempo (int a, int b, int c) {
    hora = a;
    min = b;
    seg = c;
  }

  TTempo operator++(int) {
    ++hora;
    return *this;
  }
};

int main() {
  apresentacao();
  int h, m, s;
  cout<<"Insira o valor das horas: "<<endl;
  cin>>h;
  cout<<"Insira o valor dos minutos: "<<endl;
  cin>>m;
  cout<<"Insira o valor dos segundos: "<<endl;
  cin>>s;
  TTempo t1(h, m, s);
  t1++;
  cout << t1.hora << "h " << t1.min << "m " << t1.seg << "s" << endl;
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