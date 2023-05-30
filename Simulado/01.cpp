/* 1) Faça as declarações de variáveis necessárias para que tenhamos o seguinte código em
C++. */
#include "iostream"
#include "string.h"
using namespace std;

class TAlbum{
  public:
    char titulo[30],
    artista[30],
    gravadora[20];
    int ano;
    float preco;
};

void imprimePorPreco(TAlbum* v, int nAlbuns, float p) {
    for (int i = 0; i < nAlbuns; i++) {
        if (v[i].preco == p) {
            cout << "Título: " << v[i].titulo << endl;
            cout << "Artista: " << v[i].artista << endl;
            cout << "Gravadora: " << v[i].gravadora << endl;
            cout << "Ano: " << v[i].ano << endl;
            cout << "Preço: " << v[i].preco << endl;
            cout << "---------------------" << endl;
        }
    }
}

int main(){
  int i, anoAlbum;
  float descontoAssinante;

  TAlbum*vet = new TAlbum[i];
  TAlbum*albumCorrente = new TAlbum;
  TAlbum*aux;

  strcpy(vet[i].titulo,"Coletanea – 2018/2023");
  albumCorrente->preco = 17.50 - descontoAssinante;
  albumCorrente->ano = anoAlbum;
  aux = new TAlbum;

  return 0;
}