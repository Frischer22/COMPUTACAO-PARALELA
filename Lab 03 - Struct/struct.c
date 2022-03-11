#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    float altura;
    int idade;
    char nome[50];

}PESSOA;

int compara(const void*, const void*);

void leDadosUmaPessoa()
{
    FILE *temp;
    PESSOA Povo[10];
    int cont = 1;
    char* pont = NULL;
    size_t size;
    ssize_t compare;
    int i = 0;
    temp = fopen("base.txt","r");

    while((compare = getline(&pont,&size,temp)) != -1)
    {
        char* pega = strtok(pont,"\n");
        if(cont == 1)
      {
        strcpy(Povo[i].nome,pega);
        cont++;
      }
      else if(cont == 2)
      {
        Povo[i].idade = atoi(pega);
        cont++;
      }
      else
      {
        Povo[i].altura = atof(pega);
        cont = 1;
        ++i;
      }
    }
    fclose(temp);
    qsort(Povo,10,sizeof(PESSOA),compara);
    temp = fopen("novo.txt","a");
    for(int j = 0; j<10; j++)
    {
        printf("Nome: %s, Idade: %d, Altura: %.2f\n",Povo[j].nome,Povo[j].idade,Povo[j].altura);
        fprintf(temp,"Nome: %s, Idade: %d, Altura: %.2f\n",Povo[j].nome,Povo[j].idade,Povo[j].altura);
    }
    fclose(temp);
}

int compara(const void* Povo1, const void* Povo2)
{
    const PESSOA *P1 = Povo1;
    const PESSOA *P2 = Povo2;

    if(P1->altura > P2->altura)
        return -1;
    else if(P1->altura == P2->altura)
    {
        return 0;
    }
    else
        return 1;
}

int main()
{
     leDadosUmaPessoa();
     return 0;
}
