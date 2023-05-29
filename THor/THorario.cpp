// Este código deverá sofrer correções.

#include "iostream"
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
      v1 = (h*60) + m; minutos totais
      v2 = (s.h*60) + s.m; -minutos totais
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
    TVei (){}
    void obterDados(void){
      cout<<endl<<" Entrada de Dados "<<endl<<endl;
      cout<<" Placa: ";
      fflush(stdin);
      cin.getline(placa, 10);
      cout<<" Horario de Entrada (Hora)    :";
      fflush(stdin);
      cin>>hE.h;
      cout<<" Horario de Entrada (Minutos) :";
      fflush(stdin);
      cin>>hE.m;
      cout<<" Horario de Saida (Hora)      :";
      fflush(stdin);
      cin>>hS.h;
      cout<<" Horario de Saida (Minutos)   :";
      fflush(stdin);
      cin>>hS.m;
    }
};

void apresentacao(void);

main(){
  int op;
  TVei meuCarro;
  THor tP;

  apresentacao();

  meuCarro.obterDados();

  tP = meuCarro.hS-(meuCarro.hE);

  cout<<endl;
  cout<<"     Tempo de Permanencia: "<<tP.h<<"h e "<<tP.m<<"min."<<"";
  fflush(stdin);
  getchar();
}

void apresentacao(void){
  cout<<endl<<endl;
  cout<<"   **********************************"<<endl;
  cout<<"     UFRRJ"<<endl;
  cout<<"     IM - DTL"<<endl;
  cout<<"     Bacharelado em Matematica Aplicada e Computacional"<<endl;
  cout<<"   **********************************"<<endl;
  cout<<endl<<endl;
  cout<<"     Estacionamento "<<endl<<endl<<endl;
}