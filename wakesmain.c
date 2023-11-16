#include <stdio.h>
#include "wakesshell.h"
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio_ext.h>

/**
  * main - this function is the start of the shell
  *
  * the function go in a loop for the shell prompt.
  * and execute the user input.
  *
  * @return Returns 0 for sucessful execution.
**/

int main(void)
{

char *waad = NULL;
ssize_t waadwakes;

const char *wakesexecutepath = "/user/bin/";

char *wakes = (char *)malloc(1024 * sizeof(char));

if (wakes == NULL)
{
perror("wakes");
exit(EXIT_FAILURE);
}
while (1)
{
wakes_shell_prompt();
waadwakes = getline(&waad, NULL, stdin);
if (waadwakes < 0)
{
perror("getline");
exit(EXIT_FAILURE);
}

wakesInput();
wakes_execute((char *)wakesexecutepath);
free(waad);
waad = NULL;
}
free(wakes);
return (0);
}
