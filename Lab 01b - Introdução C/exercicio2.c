#include <stdio.h>

int main(void) 
{
  float n1, n2, n3, me;
  int i;
  printf("Insira a nota 1: ");
  scanf("%f",&n1);
  printf("Insira a nota 2: ");
  scanf("%f",&n2);
  printf("Insira a nota 3: ");
  scanf("%f",&n3);
  printf("Insira a nota de exercicio: ");
  scanf("%f",&me);

  float ma = (n1 + (n2*2) + (n3*3) + me)/7;

  printf("\nMedia de Aproveitamento do aluno: ");
  
  if(ma >= 9)
  {
    printf("A\n");
  }
  else if(ma>=7.5 && ma<9)
  {
    printf("B\n");
  }
  else if(ma>=6 && ma<7.5)
  {
    printf("C\n");
  }
  else if(ma >= 4 && ma<6)
  {
    printf("D\n");
  }
  else
  {
    printf("E\n");
  }

}
