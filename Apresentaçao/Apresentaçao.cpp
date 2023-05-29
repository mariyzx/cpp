
#include "iostream"
//#include<stdlib.h>

using namespace std;

void apresentacao(void);

main(){
  int i;
  float*vet; // cria ponteiro

  apresentacao();

  vet = new float[5];

  if(vet==NULL) cout<<"   Erro em alocacao de memoria..."<<endl;

  for(i=0;i<5;i++){
    cout<<"     v["<<i<<"] = ";
    fflush(stdin);
    cin>>vet[i];
  }

  cout<<endl<<endl;
  cout<<"     vet = [ ";
  for(i=0;i<5;i++) cout<<vet[i]<<" ";
  cout<<"]"<<endl;

  delete[] vet; // vet deixa de existir

  cout<<vet;
}

void apresentacao(void){
  cout<<endl<<endl;
  cout<<"   **********************************"<<endl;
  cout<<"     UFRRJ"<<endl;
  cout<<"     IM - DTL"<<endl;
  cout<<"     Bacharelado em Matematica Aplicada e Computacional"<<endl;
  cout<<"   **********************************"<<endl;
  cout<<endl<<endl;
  cout<<"     new e delete: "<<endl;
  cout<<endl<<endl;
}