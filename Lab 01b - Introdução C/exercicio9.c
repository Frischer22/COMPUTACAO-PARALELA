#include <stdio.h>


void Modula(int matriz[3][4])
{
  int i, j;
  for(i = 0; i<3;i++)
  {
    for(j = 0; j<4; j++)
    {
      if(matriz[i][j] < 0)
      {
        matriz[i][j] = matriz[i][j] * -1;
      }
    }
  }
}


int main(void)
{
  int mat[3][4] = { {-5,9,-3,10},{2,-8,1,-20},{-4,-6,7,30}};
  int i,j;

  printf("Matriz normal: \n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 4; j++)
    {
      printf(" %d ",mat[i][j]);
    }
    printf("\n");
  }

  Modula(mat);

  printf("Matriz nova: \n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 4; j++)
    {
      printf(" %d ",mat[i][j]);
    }
    printf("\n");
  }

}
