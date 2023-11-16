#include "wakesshell.h"
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 200

/**
  * wakesInput - function to take in the entered command
  * apointer string variable
  * size_t variable indicating the buffer size
**/

wakesInput(void)
{
char *wakesinput = NULL;
size_t wakes_buffer = BUFFER_SIZE;

wakesinput = (char *)malloc(wakes_buffer * sizeof(char));
if (wakesinput == NULL)
{
perror("wakes");
exit(EXIT_FAILURE);
}

wakesprint("Enter: ");
getline(&wakesinput, &wakes_buffer, stdin);
wakes_execute(wakesinput);
free(wakesinput);
}
