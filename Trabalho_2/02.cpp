// Questão 2: Desenvolva em C++ a classe VetorR3, com os dados float x, y, z, para a
// representação de vetores no R3
// . Inclua uma sobrecarga do operador * binário, o qual retorna o
// produto vetorial entre dois vetores, isto é, entre dois objetos da classe.

#include <iostream>

using namespace std;

void apresentacao(void);

class VetorR3 {
  public:
    float x, y, z;

  VetorR3() {
    x = 0;
    y = 0;
    z = 0;
  }

  VetorR3(float a, float b, float c) {
    x = a;
    y = b;
    z = c;
  }

  VetorR3 operator *(VetorR3 v) {
    int newX = y*v.z - z*v.y;
    int newY = z*v.x - x*v.z;
    int newZ = x*v.y - y*v.x;

    VetorR3 ret(newX, newY, newZ);

    cout<<"O valor do produto vetorial entre: (" << x << ", " << y << ", " << z << ") e (" << v.x << ", " << v.y << ", " << z << ") " << " é: (" << ret.x << ", " << ret.y << ", " << ret.z << ")." << endl;
    return ret;
  }
};

int main() {
  apresentacao();

  VetorR3 v1(3, 4, 5), v2(2, 3, 4), v3;
  v3 = v1 * v2;
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