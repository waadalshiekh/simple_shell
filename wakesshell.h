#ifndef WAKES_SHELL_H
#define WAKES_SHELL_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdbool.h>

void wakesprint(const char* str);
void print_p_childid(pid_t wakesprocessid);
void wakes_shell_prompt();
void wakesInput();
void wakes_execute(const char *wakes);
int main(void);

#endif /* WAKES_SHELL_H */
