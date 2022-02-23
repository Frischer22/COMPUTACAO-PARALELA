#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char str[100], aux1, aux2, elm;
  int x = 0, pos;

  printf("Digite uma string: ");
  fgets(str, 100, stdin);

  printf("Digite a posicao que deseja inserir o caracter: ");
  scanf("%d", &pos);

  getchar();
  printf("Digite o caracter que deseja inserir: ");
  scanf("%c", &elm);

  aux1 = str[pos];
  for (int i = pos+1; i < strlen(str)+1; i++)
  {
    aux2 = str[i];
    str[i] = aux1;
    aux1 = aux2;
  }

  str[pos] = elm;

  printf("String nova: ");

  for (int i = 0; i < 100; i++)
  {
    printf("%c", str[i]);

    if(str[i] == '\0')
    {
      break;
    }
  }
}
