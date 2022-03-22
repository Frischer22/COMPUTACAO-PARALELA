#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <unistd.h>
#include <sys/wait.h>

#define ADDKEY 321

int main() 
{
  int shmid;
  int size = 1024;
  char *path = "./";
  pid_t pid;
  int status;
  
  if (( shmid = shmget(ftok(path,ADDKEY), size, IPC_CREAT|IPC_EXCL|SHM_R|SHM_W)) == -1) 
  {
    perror("Erro no shmget");
    exit(1);
  }
    int *ShmPTR = (int *) shmat(shmid, NULL, 0);
    *ShmPTR = 1;
    printf("Valor inicial = %i",*ShmPTR);
    if ((int) *ShmPTR == -1) 
    {
        printf("*** shmat error (server) ***\n");
        exit(1);
    }
    printf("\nServer has attached the shared memory...\n");

  pid = fork();
  
  if ( pid<0 )
	{
		printf("falha na criacao de um filho\n");
		exit(0);
	}

	else if ( pid==0 )
	{
		//processo filho
		*ShmPTR += 2;
        printf("\nVariavel compartilhada na memoria, estah no processo filho e mudou para: %i",*ShmPTR);
	}
    else
    {
        wait(NULL);
        *ShmPTR *= 4;
        printf("\nVariavel compartilhada na memoria, voltou para o processo pai e mudou para: %i",*ShmPTR);
        shmdt((void *) ShmPTR);
        
        
        shmctl(shmid, IPC_RMID, NULL);
        printf("\nServer has removed its shared memory...");
        printf("\nServer exits...\n");
        exit(0);
    }
}
