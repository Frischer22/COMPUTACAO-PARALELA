#include <stdio.h>

void multiplica(int mat[2][4])
{
  int i,j,multi = 1;
  
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 4; j++)
    {
      if(mat[i][j] == 0)
      {
        continue;
      }
      if(i == 1 && j == 3)
      {
        mat[i][j] = multi;
      }
      multi = mat[i][j] * multi;
    }
  }

  printf("\nPrint da matriz e do resultado da multiplicacao: \n");
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 4; j++)
    {
      printf(" %.d ",mat[i][j]);
    }
    printf("\n");
  }

}

void soma(int mat[2][4])
{
  int i,j,soma = 0;
  
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 4; j++)
    {
      soma += mat[i][j];
      if(i == 1 && j == 3)
      {
        mat[i][j] = soma;
      }
    }
  }

  printf("\nPrint da matriz e do resultado da soma: \n");
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 4; j++)
    {
      printf(" %.d ",mat[i][j]);
    }
    printf("\n");
  }

}

int main(void)
{
  int i,j,x,y;
  int mat[2][4] = {{5,9,10,0},{2,3,20,0}};
  printf("A ultima coluna será usada para colocar os resultados\n");
  
  printf("\nPrint da matriz: \n");
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 4; j++)
    {
      printf(" %.d ",mat[i][j]);
    }
    printf("\n");
  }
  soma(mat);
  multiplica(mat);
}
