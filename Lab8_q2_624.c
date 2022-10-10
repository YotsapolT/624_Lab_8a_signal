/* Program demonstrates the use of kill() */
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>

int main(void) {
    pid_t pid = fork();
    if (pid == 0) {
	printf("child created\n");
	while(1) ;	//infinite loop
	printf("this line should not be shown\n");
        exit(0);
    } else {
    	printf("parent is sleeping\n");
    	sleep(2);
	printf("parent is sending SIGKILL to child process\n");
	kill(pid, -SIGKILL);
    }
    return 0;
}
