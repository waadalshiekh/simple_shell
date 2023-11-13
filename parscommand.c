#include "wakesshell.h"
#include <stdio.h>
#include <string.h>

int main(void) {
    char s[] = "command from the input function";
    char d[] = " ";
    
    char *portion = strtok(s, d);
    
    while (portion != NULL)
    {
    wakesprint("%s\n", portion);
    portion = strtok(NULL, d);
    }
    return 0;
}
