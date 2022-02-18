#include <stdio.h>

int main(void) 
{
  int n,m;
  printf("Insira quantas linhas terá na matriz : ");
  scanf("%d",&n);
  printf("Insira quantas colunas terá na matriz : ");
  scanf("%d",&m);
  int matriz[n][m],i, j;
  
  printf ("\nDigite valor para os elementos da matriz\n\n");
  
  for ( i=0; i<n; i++ )
  {
    for ( j=0; j<m; j++ )
    {
      printf ("\nElemento[%d][%d] = ", i+1, j+1);
      scanf ("%d", &matriz[ i ][ j ]);
    }
  }

  int x,y,z,w;
  printf("\nSelecione uma linha para ser multiplicada : ");
  scanf("%d",&x);
  while(x > n)
  {
    printf("\nSelecione uma linha para ser multiplicada : ");
    scanf("%d",&x);
  }
  printf("\nInsira o numero para multiplicar a linha : ");
  scanf("%d",&z);
  printf("\nSelecione uma coluna para ser multiplicada : ");
  scanf("%d",&y);
  while(y > m)
  {
    printf("\nSelecione uma linha para ser multiplicada : ");
    scanf("%d",&y);
  }
  printf("\nInsira o numero para multiplicar a coluna : ");
  scanf("%d",&w);

  for(i = 0; i<n; i++)
  {
    for(j = 0; j<m; j++)
    {
      if(i == x-1)
      {
        matriz[i][j] = matriz[i][j] * z;
      }
      if(j == y-1)
      {
        matriz[i][j] = matriz[i][j] * w;
      }
      printf("\nElemento[%d][%d] = %d",i,j,matriz[i][j]);
    }
    printf("\n");
  }
}
