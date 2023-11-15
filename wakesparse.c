#include "wakesshell.h"
#include <stdio.h>
#include <string.h>

int main(void) {
    char f[] = "command from the input function";
    char m[] = " ";

    char *cinput = strtok(f, m);

    while (cinput != NULL)
    {wakesprint("%f\n", cinput);
    cinput = strtok(NULL, m);
    }
    return 0;
}
