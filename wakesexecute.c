#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "wakesshell.h"
#include <sys/wait.h>

void wakes_execute(const char *wakes)
{
	pid_t wakes_child = fork();

	if (wakes_child == -1)
	{
		perror("fork");
	}
	else if (wakes_child == 0)
	{
		const char *ayawakes[] = {"wakes", NULL};
		if (execve(wakes, (char *const *)ayawakes, NULL) == -1)
		{
			perror("execve");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		int situation;

		waitpid(wakes_child, &situation, 0);
	}
}
