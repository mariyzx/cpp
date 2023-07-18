#include <iostream>

using namespace std;

class Automovel {
  char nome[100], placa[30], cor[30];
  int rodas;
  float preço;

  void Automovel::setRodas(int v) {
    rodas = 4;
  }
};

class Carro : public Automovel {
  void rodas() {
    setRodas(4);
  }
};

int main() {
  Carro car1;
  car1;
}