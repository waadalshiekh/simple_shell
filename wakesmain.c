#include <stdio.h>
#include "wakesshell.h"
#include <string.h>
#include <stdlib.h>
#include <unistd.h>


int main()
{
        char wakaes[1024];

        while(1)
        {
                wakes_shell_prompt();
                if(getline(wakes, , stdin) == NULL)
                {
                        wakesprint("\n")
                                break;
                }
                wakesInput();
                wakes_execute(char *wakes);

                return (EXIT_SUCCESS);


        }


}
