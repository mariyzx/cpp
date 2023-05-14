#include <iostream>

using namespace std;

int main() {

  int num = 0; // 10, 25
  char letra = 'M'; // 'M'
  double decimal = 5.2; // 2,4999999
  float decimal2 = 5.2; // 2,5 tem precisão menor que double
  bool vivo = true; // true ou false
  string nome = "Mariana"; // "Mariana"

  cout<<"Digite o numero de vidas"<<endl;
  cin>>num;
  cout<<"Digite uma letra"<<endl;
  cin>>letra;
  cout<<"Dinheiro"<<endl;
  cin>> decimal;
  cout<<"Vivo"<<endl;
  cout<<"Nome"<<endl;
  cin>>nome;

  cout<<"================="<<endl;

  cout<< num<<endl << letra<<endl << decimal<<endl << nome<<endl;

  return 0;
}