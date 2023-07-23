// Considerando-se um inteiro numAlunosDaTurma = 10, escreva um programa que escreva em
// um arquivo binário “turma.dat” o valor de numAlunosDaTurma e, em seguida, escreva 10
// objetos da classe TAluno.

#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

float randomFloat(float min, float max) {
    return min + (float)(rand()) / (float)(RAND_MAX / (max - min));
}

class TAluno{
  public:
    char nome[40], matricula[15];
    float nota;
    TAluno(){}
};

int main() {
  int numAlunosDaTurma=10;
  ofstream arquivo;
  arquivo.open("turma.dat", ios::binary);
  TAluno alunos[numAlunosDaTurma];

    for (int i = 0; i < numAlunosDaTurma; i++) {
        sprintf(alunos[i].nome, "Aluno %d", i+1);
        sprintf(alunos[i].matricula, "teste %d", i * 2); 
        alunos[i].nota = randomFloat(0.0f, 10.0f);
    }

    if (arquivo.is_open()) {
        arquivo.write((char*)(&numAlunosDaTurma), sizeof(numAlunosDaTurma));
        arquivo.write((char*)(alunos), sizeof(TAluno) * numAlunosDaTurma);
        arquivo.close();
    }
}