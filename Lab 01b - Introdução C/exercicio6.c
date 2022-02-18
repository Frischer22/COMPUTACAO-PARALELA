#include <stdio.h>

int main(void)
{
  int i, j, m, n;
  printf("Insira a quantidade de linhas da matriz: ");
  scanf("%d", &m);
  printf("Insira a quantidade de colunas da matriz: ");
  scanf("%d", &n);
  int mat[m][n], matTransp[n][m];


  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
    {
      printf("Insira o valor da Posicao[%d][%d]: ",i,j);
      scanf("%d", &mat[i][j]);
    }
  }
    
  printf("\n");

  printf("Matriz normal: \n");
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
    {
      printf(" %d ",mat[i][j]);
    }
    printf("\n");
  }


  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
    {
      matTransp[j][i] = mat[i][j];
    }
  }
  

  printf("Matriz transposta: \n");
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++)
    {
      printf(" %d ",matTransp[i][j]);
      printf(" ");
    }
    printf("\n");
  }

}
