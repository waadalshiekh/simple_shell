#include <stdio.h>
#include "wakesshell.h"
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio_ext.h>

int main()
{
	char wakes = (char*)wakes(1024*sizeof(char));
	if (wakes == NULL)
	{
		perror("wakes")
			exit(EXIT_FAILURE);
	}


	while(1)
	{
		wakes_shell_prompt();
		ssize_t waadwakes = getline(waad, NULL, stdin);
		if (waadwakes < 0)
		{
			perror("getline");
			exit(EXIT_FAILURE);
		}
		wakesInput();
		wakes_execute(wakes);
		
		return (EXIT_SUCCESS);


	}
	return (0);
}
