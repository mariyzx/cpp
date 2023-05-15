#include <iostream>

using namespace std;

int main() {
  int num;
  string str;

  cout<<"Insira o valor de num"<<endl;
  cin>>num;

  /* if(num==1) {
    cout<< "o valor de num é 1!";
  } else {
    cout<<"nao é 1 :(";
  }
 */

  str=num==1 ? "O valor de num é 1!" : "Não é 1 :(";
  
  cout << str << endl;

  return 0;
}