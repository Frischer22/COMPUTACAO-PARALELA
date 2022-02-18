#include <stdio.h>

int main(void) 
{
  int n;
  printf("Insira o tamanho da matriz (será quadrada): ");
  scanf("%d",&n);
  int matriz[n][n],i, j;
  
  printf ("\nDigite valor para os elementos da matriz\n\n");
  
  for ( i=1; i<n+1; i++ )
    for ( j=1; j<n+1; j++ )
    {
      printf ("\nElemento[%d][%d] = ", i, j);
      scanf ("%d", &matriz[ i ][ j ]);
    }
  int menor, linha;
  for ( i=1; i<n+1; i++ )
  {
    for ( j=1; j<n+1; j++ )
    {
      if(i == 1 && j == 1)
      {
        menor = matriz[i][j];
      }
      if(matriz[i][j] <= menor)
      {
        linha = i;
      }
    }
  }
  printf("\nA linha com o menor elemento é: %d",linha);

}
