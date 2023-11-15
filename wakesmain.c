#include <stdio.h>
#include "wakesshell.h"
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio_ext.h>

int main()
{
<<<<<<< HEAD
        char wakes[1024];

        while(1)
        {
                wakes_shell_prompt();
                if(getline(wakes, , stdin) == NULL)
                {
                        wakesprint("\n");
                                break;
                }
                wakesInput();
                wakes_execute(char *wakes);
=======
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
>>>>>>> 4f5a0e7d1f9f4e72cc4ef67946dfa63d3751b03a

                return (EXIT_SUCCESS);


        }

<<<<<<< HEAD

=======
	}
	return (0);
>>>>>>> 4f5a0e7d1f9f4e72cc4ef67946dfa63d3751b03a
}
