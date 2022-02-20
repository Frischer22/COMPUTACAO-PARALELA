#include <stdio.h>
#include <string.h>


int posicao(char word[20], char letter)
{
  int i;
  for(i = 0; i<strlen(word); i++)
  {
    if(word[i] == letter)
    {
      return i;
    }
  }
  return 0;
}


int main(void)
{
  char word[20],letter;
  int pos;
  printf("Digite uma string (maximo 10 letras): ");
  gets(word);
  printf("Digite a letra que deseja encontrar na string: ");
  scanf("%1c",&letter);

  pos = posicao(word,letter);

  printf("Letra encontrada na posicao: %d\n",pos);

}
