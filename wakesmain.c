#include <stdio.h>
#include "wakesshell.h"
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio_ext.h>

/**
  * main - function
  * @waad :
  * @waadwakes :
  * @wakes :
  * Return :
**/

char *waad = NULL;
ssize_t waadwakes;

const char *wakesexecutepath = "/user/bin/";

int main()
{
        char *wakes = (char*)malloc(1024*sizeof(char));

        if (wakes == NULL)
        {
                perror("wakes");
                        exit(EXIT_FAILURE);
        }


        while(1)
        {
                wakes_shell_prompt();
                waadwakes = getline(&waad, NULL, stdin);
                if (waadwakes < 0)
                {
                        perror("getline");
                        exit(EXIT_FAILURE);
                }

                wakesInput();
                wakes_execute((char*)wakesexecutepath);
                free(waad);
                waad = NULL;
        }
        free(wakes);
        return (0);
}
