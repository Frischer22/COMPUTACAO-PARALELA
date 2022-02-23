#include <stdio.h>
#include <stdlib.h>

int main()
{
  char str[100];
  int x = 0, pos;

  printf("Digite uma string: ");
  fgets(str, 100, stdin);

  printf("Digite a posicao do caracter que deseja remover: ");
  scanf("%d", &pos);

  str[pos] = '\0';

  while((str[pos+1])!='\0')
  {
    str[pos] = str[pos+1];
    pos++;
  }
  str[pos] = '\0';

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
