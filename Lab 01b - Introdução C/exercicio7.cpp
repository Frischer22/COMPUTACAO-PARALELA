#include <stdio.h>
#include <iostream>

using namespace std;

typedef struct {
  string Nome;
  float Peso;
  int Idade;
  float Altura;
}Pessoa;

Pessoa SetPessoa(int idade, float peso, float altura)
{
  Pessoa P;
  P.Idade = idade;
  P.Peso = peso;
  P.Altura = altura;
  return P;
}

void ImprimePessoa(Pessoa P)
{
  cout << "Idade: " << P.Idade << " anos\nPeso: " << P.Peso << "kg\nAltura: " << P.Altura << "m" << endl;
}

int main()
{
  string name[50] = { "Alcino", "Bruno", "Gustavo", "Pedro", "Ismael" };
  Pessoa Alcino;
  Pessoa Bruno;
  Pessoa Gustavo;
  Pessoa Pedro;
  Pessoa Ismael;
  Alcino = SetPessoa(50, 107, 2.05);
  Bruno = SetPessoa(19, 70.5, 1.80);
  Gustavo = SetPessoa(19, 45, 1.42);
  Pedro = SetPessoa(21, 85, 1.53);
  Ismael = SetPessoa(85, 60.3, 1.70);

  Pessoa vet[5] = {Alcino, Bruno, Gustavo, Pedro, Ismael};

  for (int i = 0; i < 3; i++){
    Pessoa A;
    cout << "\nNome da " << i+1 << "a pessoa que deseja buscar: ";
    cin >> A.Nome;

    int flag = 0;
    for (int j = 0; j < 5; j++){
      if (A.Nome == name[j]){
        flag = 1;
        ImprimePessoa(vet[j]);
      }
    }
    if (flag == 0){
      cout << "Nome nao encontrado no vetor." << endl;
    }
  }

  return 0;
}
