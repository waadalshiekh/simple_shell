#include <stdio.h>
#include <wakesshell.h>

#define BUFFER_SIZE 1024


int main()
{
	char* wakesinput = NULL;
	size_t the_buffer = BUFFER_SIZE;

	wakesinput = (char*)wakesmalloc(the_buffer*sizeof(char));
	if(wakesinput == NULL)
	{
          perror("wakesmalloc");
	  exit(EXIT_FAILURE);
	}
	while(1)
	{
		wakes_shell_prompt();
	}

	wakesprint("Enter: ");
	getline(&wakesinput,&the_buffer,stdin);
	wakesprint("Input:%s",wakesinput);
	free(wakesinput);
	
	return(0);
}
