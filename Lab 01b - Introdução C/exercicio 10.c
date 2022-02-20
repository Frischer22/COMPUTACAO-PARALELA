#include <stdio.h>

void multiplica(float mat[3][4], int x, int y, int z, int w)
{
  int i,j;
  for(i = 0; i<3; i++)
  {
    for(j = 0;j<4; j++)
    {
      if(i == x-1)
      {
        mat[i][j] = mat[i][j] * z;
      }
      if(j == y-1)
      {
        mat[i][j] = mat[i][j] * w;
      }
    }
  }
}



int main(void)
{
  int i,j,x,y,z,w;
  float mat[3][4] = { {5.5,9,3.2,10},{2,8.43,1.68,20},{4,6.35,7.7,30.7}};
  
  printf("Print da matriz: \n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 4; j++)
    {
      printf(" %.2f ",mat[i][j]);
    }
    printf("\n");
  }
  printf("\nSelecione uma linha para ser multiplicada : ");
  scanf("%d",&x);
  while(x > 3)
  {
    printf("\nSelecione uma linha para ser multiplicada : ");
    scanf("%d",&x);
  }
  printf("\nInsira o numero para multiplicar a linha : ");
  scanf("%d",&z);
  printf("\nSelecione uma coluna para ser multiplicada : ");
  scanf("%d",&y);
  while(y > 4)
  {
    printf("\nSelecione uma linha para ser multiplicada : ");
    scanf("%d",&y);
  }
  printf("\nInsira o numero para multiplicar a coluna : ");
  scanf("%d",&w);

  multiplica(mat,x,y,z,w);

  printf("\nMatriz multiplicada: \n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 4; j++)
    {
      printf(" %.2f ",mat[i][j]);
    }
    printf("\n");
  }

}
