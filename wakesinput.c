#include <wakesshell.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 200
void wakesInput()
{
	char* wakesinput = NULL;
	size_t wakes_buffer = BUFFER_SIZE;

	wakesinput = (char*)wakes(wakes_buffer*sizeof(char));
	if (wakesinput==NULL)
	{
		perror("wakes");
		exit(EXIT_FAILURE);
	}

	wakesprint("Enter: ")
		getline(&wakesinput, &wakes_buffer, stdin);
	wakesprint("the input: %s" , wakesinput);
	free (wakesinput);

}
