// Bruno Frischer TIA: 32046235
// Gustavo Eizono Cruz TIA: 32012403
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <string.h>
#include <stdlib.h>

int main(int argc , char *argv[] )
{
	pid_t pid;

	if (argc != 2)
	{
		printf("arg missing or exceeding\n");
		exit(0);
	}

	// atoi converte string pra int
	if ( atoi ( argv[1] ) <0 )
	{
		printf("negative number entered %d", atoi(argv[1]));
		exit(0);
	}

	pid=fork();

	if ( pid<0 )
	{
		printf("failed to create child\n");
		exit(0);
	}

	else if ( pid==0 )
	{
		//processo filho
		int ans = 0, i, j, k = 2, n, cont;

		n = atoi(argv[1]);
		int arr[n],sum[n];

		arr[0] = 1;

		// fatorial
		for (i=1 ; i<n; i++)
		{
			arr[i] = arr[i-1]*k;
			k++;
			if(i == n-1)
			{
				printf("%d",arr[i]);
			}
		}
		exit(0);
	}

	// processo pai
	else
	{
		wait(NULL);

		// wait serve para esperar o processo pai ficar em espera para o processo filho ser executado
		printf("\nFim\n");
	}
}
