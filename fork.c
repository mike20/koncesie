# include <stdio.h>
#include <stdlib.h>
main()
{
    int child_pid;
    
    printf("Zaciatok\n");

    child_pid = fork();
    switch(child_pid)
    {
        case 0:
            printf("Decko\n");
	    sleep(10000);
            exit(0);
        case -1:
            perror("fork");
            exit(-1);
        default:
            printf("Ocko: deckov PID=%d\n",child_pid);
    }
}
