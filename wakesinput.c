<<<<<<< HEAD
=======
#include "wakesshell.h"
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 200
void wakesInput()
{
	char* wakesinput = NULL;
	size_t wakes_buffer = BUFFER_SIZE;

	wakesinput = (char*)malloc(wakes_buffer*sizeof(char));
	if (wakesinput == NULL)
	{
		perror("wakes");
		exit(EXIT_FAILURE);
	}

	wakesprint("Enter: ");
		getline(&wakesinput, &wakes_buffer, stdin);
	wakes_execute(wakesinput);
	free (wakesinput);

}
>>>>>>> 4f5a0e7d1f9f4e72cc4ef67946dfa63d3751b03a
