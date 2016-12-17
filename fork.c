#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
int main(int argc, char *argv[])
{
	pid_t pid = fork();
	if(pid < 0 )
		{
		printf("Creation of child is failed\n");
		}	
	else if(pid == 0)
		{
		printf("I'm child process.\n");
		printf("Child Pid = %d\n", pid);
		printf("Child's Parent Pid = %d\n", (int) getpid());
		}
	else if(pid > 0)
		{
		printf("I'm parent process\n");
		printf("Parent Pid = %d\n", pid);
		wait(NULL);
		}
	return 0;
}
