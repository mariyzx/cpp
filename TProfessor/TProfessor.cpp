#include "iostream"
#include "string.h"
//#include<stdlib.h>

using namespace std;

class TProfessor{
  private:
    char nome[80];
    int idade;
  public:
  // construtor
    TProfessor(){
      cout<<endl<<endl<<"     TProfessor"<<endl<<endl;
      strcpy(nome,"");
      idade = 0;
    }
  // destruidor
    ~TProfessor(){
      cout<<endl<<endl<<"     ~TProfessor"<<endl<<endl;
    }
    
    void imprimeDados(void){
       cout<<endl<<endl;
       cout<<"     Nome  : "<<nome<<endl;
       cout<<"     Idade : "<<idade<<endl;
    }
};


void teste(void){
  TProfessor prof2;
}

int main(){
  TProfessor prof1;

  prof1.imprimeDados();

  cout<<endl<<endl<<"     Antes da chamada a \"teste()\"..."<<endl<<endl;

  teste();

  cout<<endl<<endl<<"     Depois da chamada a \"teste()\"..."<<endl<<endl;

}