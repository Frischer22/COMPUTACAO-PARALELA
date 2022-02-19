#include <stdio.h>

int main(void)
{
  int i, j;

  int mat[3][4] = { {5,9,3,10},{2,8,1,20},{4,6,7,30}};
  int matTransp[4][3];


  printf("Matriz normal: \n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 4; j++)
    {
      printf(" %d ",mat[i][j]);
    }
    printf("\n");
  }


  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 4; j++)
    {
      matTransp[j][i] = mat[i][j];
    }
  }
  

  printf("Matriz transposta: \n");
  for (i = 0; i < 4; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf(" %d ",matTransp[i][j]);
      printf(" ");
    }
    printf("\n");
  }

}
