#ifndef WAKES_SHELL_H
#define WAKES_SHELL_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdbool.h>

void wakesprint (const char* str);
void wakes_shell_prompt();
void wakesInput();
void wakes_exit();
void wakes_execute(char *wakes);
int main(void);

#endif /* WAKES_SHELL_H */
