/* Desenvolva a classe TFuncionário, derivada da classe TPessoa, com os dados membros setor (array com 50 carac) e
id (array com 20 carac), e com a função membro saidaDados (p a apresentação de todos os dados de um funcionario)
*/

#include "iostream"
#include "cstring"

using namespace std;

class TPessoa {
  public:
    char nome[80], cpf[16];
    TPessoa() {};
};

class TFuncionario : public TPessoa {
  public:
    char setor[51], id[21];

    TFuncionario() : TPessoa() {
      strcpy(nome, "");
      strcpy(cpf, "");
      strcpy(setor, "");
      strcpy(id, "");
    };

    TFuncionario(const char* n, const char* c, const char* s, const char* i)
        : TPessoa() {
        strcpy(nome, n);
        strcpy(cpf, c);
        strcpy(setor, s);
        strcpy(id, i);
    }

    void entradaDados(void) {
      cout<<"*************INSIRA OS VALORES***************"<<endl;
      cout<<"Nome do funcionário: ";
      cin.getline(nome, 80);
      cout<<"CPF: "<<cpf;
      cin.getline(cpf, 16);
      cout<<"Setor: "<<setor;
      cin.getline(setor, 51);
      cout<<"ID: "<<id;
      cin.getline(id, 21);
    }

    void saidaDados(void) {
      cout<<endl<<endl;
      cout<<"*************SAÍDA DE DADOS***************"<<endl;
      cout<<"Nome do funcionário: "<<nome<<endl;
      cout<<"CPF: "<<cpf<<endl;
      cout<<"Setor: "<<setor<<endl;
      cout<<"ID: "<<id<<endl;
    }
};

int main() {
  TFuncionario funcionario;
  funcionario.entradaDados();

  funcionario.saidaDados();
}