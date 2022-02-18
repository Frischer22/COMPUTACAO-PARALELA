#include <stdio.h>
#include <string.h>

int main () 
{
    char nome1[100], nome2[100];
    printf("Informe o primeiro nome: ");
    gets(nome1);
    printf("Informe o segundo nome: ");
    gets(nome2);
    if(strcmp(nome1, nome2)<0)
    {
      printf("A ordem eh:\n %s\n %s\n", nome1,nome2);
    }
        
    else
    {
      printf("A ordem eh:\n %s\n %s\n", nome2,nome1);
    }

    return 0; 
}
