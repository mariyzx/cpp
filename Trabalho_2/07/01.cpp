// Questão 1: Desenvolva em C++ a classe TPessoa, com os dados membros (public) nome e CPF.
// Desenvolva a classe TAluno, derivada (public) de TPessoa, com os dados membros
// matricula e curso. Desenvolva funções membros na classe TAluno para a entrada e
// impressão de dados.

#include <iostream>

using namespace std;

void apresentacao(void);

class TPessoa {
  public:
    string nome, CPF;
};

class TAluno : public TPessoa {
  public:
    string curso;
    int matricula;

  void entradaDeDados() {
    cout<<"Insira seu nome: "<<endl;
    cin>>nome;
    cout<<"Insira seu CPF: "<<endl;
    cin>>CPF;
    cout<<"Insira seu curso: "<<endl;
    cin>>curso;
    cout<<"Insira ssua matrícula: "<<endl;
    cin>>matricula;
  }

  void saidaDeDados() {
    cout<<endl<<endl;
    cout<<"   **********************************"<<endl;
    cout<<"Nome: ";
    cout<<nome<<endl;
    cout<<"CPF: ";
    cout<<CPF<<endl;
    cout<<"Curso: ";
    cout<<curso<<endl;
    cout<<"Matrícula: ";
    cout<<matricula<<endl;
    cout<<"   **********************************"<<endl;
  }
};

int main() {
  TAluno aluno1;
  aluno1.entradaDeDados();
  aluno1.saidaDeDados();
};

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