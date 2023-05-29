#include "iostream"
//#include<stdlib.h> para alocação de memória (malloc)

using namespace std;

class TAluno{
  public:
    char nome[80];
    float P1, P2, T1, T2, T3, T4, T5, T6, T7, T8, MP;

    void obterNotas(void);
    void calcularImprimirNotas(void);
};

int main() {
  int i, numAlunos;
  TAluno vetTurma[15];
  // declara um ponteiro chamado p que pode ser usado para armazenar o endereço de um objeto TAluno
  TAluno*p;

  cout<<"     UFRRJ - IM - DTL\n";
  cout<<"     Curso de Matematica\n";
  cout<<"     Computacao II\n\n";
  cout<<"   ---------------------------------\n\n";

  cout<<"     Entrada de Dados:\n\n";

  for(i=0;i<3;i++){
    cout<<"\n\n\n     Aluno #"<<i+1<<":\n\n";
    vetTurma[i].obterNotas();
  }


  cout<<"     \n\n\n\n";
  cout<<"     Saida de Dados:\n\n";
  for(i=0;i<3;i++){
    cout<<"     Aluno #"<<i+1<<": \n\n";
    vetTurma[i].calcularImprimirNotas();
  }

  cout<<"     \n\n\n\n";
}

void TAluno::obterNotas(void){
      cout<<"     Nome  : ";
      cin.getline(nome, 80);
      cout<<"     P1    : ";
      cin>>P1;
      cout<<"     P2    : ";
      cin>>P2;
      cin.ignore();
}

void TAluno::calcularImprimirNotas(void){
      cout<<"     Nome  : "<<nome<<"\n";
      cout<<"     P1    : "<<P1<<endl;
      cout<<"     P2    : "<<P2<<endl;

      MP = (P1 + P2)/2.0;

      cout<<"     MP    : "<<MP<<"\n";

      if(MP>=7) cout<<"    [ Aprovado ]"<<endl;
      else cout<<"    [ Fazer Optativa ]"<<endl;
      
      cout<<"\n\n\n";
}