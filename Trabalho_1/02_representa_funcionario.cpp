// Questão 1: Apresente um programa em C++ que contenha uma classe para a representação de
// um funcionário de uma empresa, registrando seu nome, CPF, salário e data de admissão. Nesta
// classe, defina os atributos como privados e apresente métodos públicos para acessarmos e para
// modificarmos os atributos.

#include <iostream>

using namespace std;

void apresentacao(void);

class Funcionario {
  string nome, cpf, data_admissao;
  float salario;
  
  public:
  // getters
    string getNome(void) {
      return nome;
    }
    string getCPF(void) {
      return cpf;
    }
    string getAdmissao(void) {
      return data_admissao;
    }
    float getSalario(void) {
      return salario;
    }

    //setters
    void setNome(string n) {
      nome = n;
    }
    void setCPF(string c) {
      cpf = c;
    }
    void setAdmissao(string a) {
      data_admissao = a;
    }
    void setSalario(float s) {
      salario = s;
    }
};

int main() {
  Funcionario funcionario;
  string nome, cpf, admissao;
  float salario;

  apresentacao();

  cout<<"Insira seu nome: "<<endl;
  cin>>nome;
  cout<<"Insira seu CPF: "<<endl;
  cin>>cpf;
  cout<<"Insira sua data de admissão: "<<endl;
  cin>>admissao;
  cout<<"Insira seu salário: "<<endl;
  cin>>salario;

  funcionario.setNome(nome);
  funcionario.setCPF(cpf);
  funcionario.setAdmissao(admissao);
  funcionario.setSalario(salario);

  cout<<"Nome: "<<funcionario.getNome()<<endl;
  cout<<"CPF: "<<funcionario.getCPF()<<endl;
  cout<<"Data de admissão: "<<funcionario.getAdmissao()<<endl;
  cout<<"Salário: "<<funcionario.getSalario()<<endl;  
}

void apresentacao(void){
  cout<<endl<<endl;
  cout<<"   **********************************"<<endl;
  cout<<"     UFRRJ"<<endl;
  cout<<"     IM - DTL"<<endl;
  cout<<"     Bacharelado em Matematica Aplicada e Computacional"<<endl;
  cout<<"     Mariana Werneck"<<endl;
  cout<<"   **********************************"<<endl;
  cout<<endl<<endl;
}