/*Considere em C++ a classe TVetor para a representção de vetores no R³
  a) Desenvolvaa a sobrecarga do operador * para o cálculo do produto vetorial entre dois vetores no R³
  b) Desenvolva na classe TVetor uma função para a conversão de um objeto v da classe TVetor a um float m,
  atribuindo a m o módulo do vetor v;
*/

#include "iostream"
#include "cmath"

using namespace std;

void apresentacao(void);

class TVetor {
  public:
    float x, y, z;

    TVetor() {
      x = y = z = 0;
    }

    TVetor(float a, float b, float c) {
      x = a;
      y = b;
      z = c;
    }

    TVetor operator * (TVetor segundoVetor) {
      int newX = y*segundoVetor.z - z*segundoVetor.y;
      int newY = z*segundoVetor.x - x*segundoVetor.z;
      int newZ = x*segundoVetor.y - y*segundoVetor.x;

      TVetor ret(newX, newY, newZ);

      cout<<"O valor do produto vetorial entre: (" << x << ", " << y << ", " << z << ") e (" <<segundoVetor.x << ", " <<segundoVetor.y << ", " << segundoVetor.z << ") " << " é: (" << ret.x << ", " << ret.y << ", " << ret.z << ")." << endl;
      return ret;
    }

    operator float() {
      return sqrt(x * x + y * y + z * z);
    }

    void entradaDeDados(void) {
      cout<<"Insira as coordenadas do vetor"<<endl;
      cout<<"x: ";
      cin>>x;
      cout<<"y: ";
      cin>>y;
      cout<<"z: ";
      cin>>z;
    }
};

int main() {
  float m;
  apresentacao();

  TVetor v, v2, v3;
  v.entradaDeDados();
  v2.entradaDeDados();
  v3 = v * v2;
  m = v;
  cout<<"O MÓDULO DO VETOR ("<<v.x << " ," << v.y << " ," << v.z << ") é: " << m<<endl;
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