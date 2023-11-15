#include <stdio.h>
#include <stdlib.h>
#include "wakesshell.h"
#include <unistd.h>
#include <sys/wait.h>

void wakes_execute(char *wakes)
{
        pid_t wakes_child = fork();

<<<<<<< HEAD
        if (wakes_child == -1)
        {
                perror("fork");
        }
        else if (wakes_child == 0)
        {
                char *my_wakes[] = {wakes_command, NULL};
                if (execve(wakes_command, my_wakes, NULL) == -1)
                {
                        perror("wakes execute");
                        exit(EXIT_FAILURE);
                }
        }
        else
        {
                int situation;
=======
	if (wakes_child == -1)
	{
		perror("fork");
	}
	else if (wakes_child == 0)
	{
		char *my_wakes[] = {wakes_child, NULL};
		if (execve(wakes_child, my_wakes, NULL) == -1)
		{
			perror("wakes execute");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		int situation;
>>>>>>> 4f5a0e7d1f9f4e72cc4ef67946dfa63d3751b03a

                waitpid(wakes_child, &situation, 0);
        }
}
