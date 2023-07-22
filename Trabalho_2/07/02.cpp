// Apresente modificações para que o seguinte código não contenha erros.

// 1º Remove '.h' do cabeçalho #include <iostream>: Na versão mais recente do C++ (C++11 e posteriores), o cabeçalho correto para inclusão é simplesmente "#include <iostream>"
// 2º Visibilidade de métodos: Adiciona a visibilidade protected à classe Base, dessa forma,
// os membros b1, b2 e b3 são acessíveis apenas para classes derivadas de Base;
// 3º Criando Setters: os valores de b1, b2 e b3 são atribuidos através das funções públicas
// setB1, setB2 e setB3, assim qualquer classe devirada de Base terá a possibilidade de alterar os valores de b1, b2 e b3;
// 4º altera herança privada para pública: a classe Derivada1 não teria acesso aos setters da classe Base
// se a herança fosse feita de forma privada
// 5º Muda métodos de atribuição: A atribuição de valores à b1, b2 e b3 agora é feita através dos setters;


#include <iostream>

using namespace std;

void apresentacao(void);

class Base{
  protected:
    int b1;
    int b2;
    int b3;
  public:
    Base(){}
    void setB1(int x) {
      b1 = x;
    };

    void setB2(int y) {
      b2 = y;
    };

    void setB3(int z) {
      b3 = z;
    };

    void saida() {
      std::cout<<"b1: "<<b1<<" b2: "<<b2<< " b3: "<<b3<<std::endl;
    }
};

class Derivada1 : public Base{
  private:
    int d11;
    int d12;

  public:
    Derivada1(){
      b2 = 0;
    }
};

class Derivada2 : public Base{
  private:
    int d21;
    int d22;
  public:
    Derivada2(){
      b2 = 0;
      b1 = 0;
    }
};

int main(){
  apresentacao();
  Base ObjBase;
  Derivada1 ObjDeriv1;
  Derivada2 ObjDeriv2;
  ObjBase.setB1(2);
  ObjBase.setB3(2);
  ObjBase.saida();
  ObjDeriv1.setB1(7);
  ObjDeriv1.setB3(7);
  ObjDeriv1.saida();
  ObjDeriv2.setB2(8);
  ObjDeriv2.setB3(8);
  ObjDeriv2.saida();
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