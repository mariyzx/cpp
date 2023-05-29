// Este código deverá sofrer correções.

#include "iostream"
#include "string.h"
//#include<stdlib.h>

using namespace std;

class THor{
  public:
    int h,m;
    THor operator-(THor s){
      THor ret;
      int vr,v1,v2;
      v1 = (h*60) + m;//minutos totais
      v2 = (s.h*60) + s.m;//minutos totais
      vr = v1 - v2;
      ret.h = vr/60;
      ret.m = vr%60;
      return ret;
    }

/*     THor subtracao(THor s){
      THor ret;
      int vr,v1,v2;
      v1 = (h*60) + m;//minutos totais
      v2 = (s.h*60) + s.m;//minutos totais
      vr = v1 - v2;
      ret.h = vr/60;
      ret.m = vr%60;
      return ret;
    } */
};

class TVei{
  public:
    char placa[10];
    THor hE, hS;

    TVei (){} // construtor

    void obterDadosEntrada(void){
      cout<<endl<<" Entrada de Dados "<<endl<<endl;
      cout<<" Placa: ";
      fflush(stdin);
      cin>>placa;
      cout<<" Horario de Entrada (Hora)    :";
      fflush(stdin);
      cin>>hE.h;
      cout<<" Horario de Entrada (Minutos) :";
      fflush(stdin);
      cin>>hE.m;
    }

    void obterDadosSaida(void){
      cout<<endl<<" Saida de Veiculo "<<endl<<endl;
      //cout<<" Placa: ";
      //fflush(stdin);
      //gets(placa);
      //cout<<" Horario de Entrada (Hora)    :";
      //fflush(stdin);
      //cin>>hE.h;
      //cout<<" Horario de Entrada (Minutos) :";
      //fflush(stdin);
      //cin>>hE.m;
      cout<<" Horario de Saida (Hora)      :";
      fflush(stdin);
      cin>>hS.h;
      cout<<" Horario de Saida (Minutos)   :";
      fflush(stdin);
      cin>>hS.m;
    }
};

int menu(void);
TVei* defNumVagas(int*e);
void entradaVeic(TVei*v,int*nVc,int nVg);
void saidaVeic(TVei*v,int*nVc,int nVg);

main(){
  int op, numVagas = 0;
  int numVeiculos = 0;
  TVei *vet = NULL;
  THor tP;

  do{
    op = menu();

    switch(op){
      case(1):{
        vet = defNumVagas(&numVagas);
        break;
      }
      case(2):{
        entradaVeic(vet,&numVeiculos,numVagas);
        break;
      }
      case(3):{
        saidaVeic(vet,&numVeiculos,numVagas);
        break;
      }
    }
  }while(op!=4);

  if(vet!=NULL) delete[] vet;

  //apresentacao();

  //meuCarro.obterDados();

  //tP = meuCarro.hS-(meuCarro.hE);

  //cout<<endl;
  //cout<<"     Tempo de Permanencia: "<<tP.h<<"h e "<<tP.m<<"min."<<"     <Enter>";
  //fflush(stdin);
  //getchar();
}

int menu(void){
  int opc;
  cout<<endl<<endl;
  cout<<"   **********************************"<<endl;
  cout<<"     UFRRJ"<<endl;
  cout<<"     IM - DTL"<<endl;
  cout<<"     Licenciatura em Matematica"<<endl;
  cout<<"     Bacharelado em Matematica Aplicada e Computacional"<<endl;
  cout<<"   **********************************"<<endl;
  cout<<endl<<endl;
  cout<<"     Estacionamento "<<endl<<endl<<endl;

  cout<<"     [1] - Definir Numero de Vagas"<<endl;
  cout<<"     [2] - Entrada de Veiculo"<<endl;
  cout<<"     [3] - Saida de Veiculo"<<endl;
  cout<<"     [4] - Sair"<<endl<<endl;

  cout<<"     Entre com a opcao: ";
  fflush(stdin);
  cin>>opc;
  return opc;
}


TVei* defNumVagas(int*e){
  int nV;
  TVei*p;

  cout<<endl<<endl;
  cout<<"   **********************************"<<endl;
  cout<<"     Define Numero de Vagas"<<endl;
  cout<<"   **********************************"<<endl<<endl;

  cout<<"   Entre com o numero de vagas no Estacionamento: "<<endl;
  fflush(stdin);
  cin>>nV;

  *e = nV;

  p = new TVei[nV];  // rever

  if(p==NULL){
    cout<<endl<<endl;
    cout<<"     Erro em alocacao de memoria. (defNumVagas();)"<<endl<<endl;
  }
  return p;
}

void entradaVeic(TVei*v,int*nVc,int nVg){
  int indice;
  cout<<endl<<endl;
  cout<<"   **********************************"<<endl;
  cout<<"     Entrada de Veiculo"<<endl;
  cout<<"   **********************************"<<endl<<endl;

  indice = *nVc;

  cout<<"     Num. Vagas no Estacionamento    : "<<nVg<<endl;
  cout<<"     Num. Veiculos no Estacionamento : "<<*nVc<<endl;

  if(nVg==*nVc){
    cout<<endl<<endl;
    cout<<"     ESTACIONAMENTO LOTADO."<<endl<<endl;
  }
  else{
    v[indice].obterDadosEntrada();
    *nVc = indice+1;

    cout<<"     Num. Vagas no Estacionamento    : "<<nVg<<endl;
    cout<<"     Num. Veiculos no Estacionamento : "<<*nVc<<endl<<endl<<endl;
  }
}


void saidaVeic(TVei*v,int*nVc,int nVg){
  char placa[10];

  int i, indice, carro, achei = 0;

  cout<<endl<<endl;
  cout<<"   **********************************"<<endl;
  cout<<"     Saida de Veiculo"<<endl;
  cout<<"   **********************************"<<endl<<endl;

  //indice = *nVc;

  cout<<"     Num. Vagas no Estacionamento    : "<<nVg<<endl;
  cout<<"     Num. Veiculos no Estacionamento : "<<*nVc<<endl;


  cout<<"     Entre com a Placa do Veiculo : ";
  fflush(stdin);
  cin.getline(placa, 10);

  for(i=0;i<*nVc;i++){
    if(strcmp(placa,v[i].placa)==0){
      achei = 1;
      carro = i;
    }
  }

  v[carro].obterDadosSaida();

  if(*nVc==0){
    cout<<endl<<endl;
    cout<<"     ESTACIONAMENTO VAZIO."<<endl<<endl;
  }
  else{
    *nVc = (*nVc) - 1;

    cout<<"     Num. Vagas no Estacionamento    : "<<nVg<<endl;
    cout<<"     Num. Veiculos no Estacionamento : "<<*nVc<<endl<<endl<<endl;
  }
}