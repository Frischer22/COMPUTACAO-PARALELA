#include <stdio.h>

int main(void) 
{
  int rows,i,j,mid;
    
  printf("Digite o número de elementos : ");
  scanf("%d",&rows);

  while(rows%2 ==0)
  {
    printf("Quantidade par, digite um número impar: ");
    scanf("%d",&rows);
  }

  int arr[rows];


  for(i = 0; i<rows; i++)
  {
    arr[i] = i+1;
  }
  
  for (i = 1; i <=rows-i+1; i++)
  {
	  for (j = 1; j <= rows; j++)
		{
			if(j - i >= 0 && j <= rows - i+1)
      {
        printf("%d", j);
      }
      else
      {
        printf("_");
      }
    }
    printf("\n");
  }
}
