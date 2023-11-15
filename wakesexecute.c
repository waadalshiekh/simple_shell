#include <stdio.h>
#include <stdlib.h>
#include "wakesshell.h"
#include <unistd.h>
#include <sys/wait.h>

void wakes_execute(char *wakes)
{
        pid_t wakes_child = fork();

        if (wakes_child == -1)
        {
                perror("fork");
        }
        else if (wakes_child == 0)
        {
                char *my_wakes[] = {"/usr/bin/wakes", NULL};
                if (execve("/usr/bin/wakes", my_wakes, NULL) == -1)
                {
                        perror("wakes execute");
                        exit(EXIT_FAILURE);
                }
        }
        else
        {
                wait(&situation);
                if (WIFEXITED(situation))
                {
                        int status = WEXITSTATUS(situation);
                        printf("Wakes command exited with status %d\n", status);
                }
                else if (WIFSIGNALED(situation))
                {
                        int signal = WTERMSIG(situation);
                        printf("Wakes command received signal %d\n", signal);
                }
                else
                {
                        printf("Wakes command exited abnormally\n");
                }
        }
}
