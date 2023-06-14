#include "iostream"
#include "string.h"

using namespace std;

class TNo{
  public:
    int valor;
    TNo*prox;
    TNo(){
      valor = 0;
      prox = NULL;
    }
};

class TListaEncadeada{
  public:
    int nEltos;
    TNo*ini,*fim;

    TListaEncadeada(){
      nEltos = 0;
      ini = NULL;
      fim = NULL;
    }

    void inserir(int vlr){
      TNo*aux;

      aux = new TNo;
      aux->valor = vlr;

      if(ini==NULL){
        ini = aux;
      }
      else{
        fim->prox = aux;
      }
      fim = aux;
      nEltos++;
    }


    int excluir(void){
      int ret;
      TNo*aux;

      ret = ini->valor;
      aux = ini;
      ini = ini->prox;
      delete aux;
      if(nEltos==1)
        fim = NULL;
      nEltos--;
      return ret;
    }

    void listar(void){
      TNo*corr;

      cout<<endl<<endl<<"     ";
      corr = ini;
      while(corr!=NULL){
        cout<<corr->valor;
        if(corr!=fim)cout<<" - ";
        corr = corr->prox;
      }
      cout<<endl<<endl;
    }

    int vazia(void){
      if(ini==NULL) return 1;
      else return 0;
    }
};

int menu(void);

main(){
  int op;
  int valor;
  TListaEncadeada minhaLista;

  do{
    op = menu();

    switch(op){
      case(1):{
        cout<<endl<<endl;
        cout<<"     Inserir"<<endl<<endl;
        cout<<"     Entre com o valor a ser inserido na Lista Encadeada: ";
        fflush(stdin);
        cin>>valor;
        minhaLista.inserir(valor);
        break;
      }
      case(2):{
        cout<<endl<<endl;
        cout<<"     Excluir"<<endl<<endl;
        if(minhaLista.vazia()){
          cout<<"     A Lista Encadeada esta vazia."<<endl<<endl;
        }
        else{
          valor = minhaLista.excluir();
          cout<<"     O valor excluido da Lista Encadeada foi o ";
          cout<<valor<<endl;
        }
        break;
      }
      case(3):{
        cout<<endl<<endl;
        cout<<"     Listar"<<endl<<endl;
        if(minhaLista.vazia()){
          cout<<"     A Lista Encadeada esta vazia."<<endl<<endl;
        }
        else{
          minhaLista.listar();
        }
        break;
      }
    }
  }while(op!=4);
}

int menu(void){
  int opc;
  cout<<endl<<endl;
  cout<<"   *******************************************************"<<endl;
  cout<<"     UFRRJ"<<endl;
  cout<<"     IM - DTL"<<endl;
  cout<<"     Licenciatura em Matematica"<<endl;
  cout<<"     Bacharelado em Matematica Aplicada e Computacional"<<endl;
  cout<<"   *******************************************************"<<endl;
  cout<<endl<<endl;
  cout<<"     Lista Encadeada"<<endl<<endl<<endl;

  cout<<"     [1] - Incluir Elemento"<<endl;
  cout<<"     [2] - Excluir Elemento"<<endl;
  cout<<"     [3] - Listar Elementos"<<endl;
  cout<<"     [4] - Sair"<<endl<<endl;

  cout<<"     Entre com a opcao: ";
  fflush(stdin);
  cin>>opc;
  return opc;
}