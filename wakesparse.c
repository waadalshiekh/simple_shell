#include "wakesshell.h"
#include <stdio.h>
#include <string.h>
// #include <unistd.h>

int main(void) {
    char sc[] = "command from the input function";
    char dc[] = " ";

    char *cinput = strtok(sc, dc);

    while (cinput != NULL)
    { 
    wakesprint("%s\n", "cinput\n");
    cinput = strtok(NULL, dc);
    }
    return 0;
}
