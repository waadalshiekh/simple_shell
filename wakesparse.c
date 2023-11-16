#include "wakesshell.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
  * wakesparse - function parses the entered command
  * @s : array of strings containing entered command 
  * @c : array of strings indicating defined delimiters
  * @input : a variable containing the result of strtok function
  * Return
**/

int wakespaese(void) {
    char s[] = "wakesinput";
    char d[] = " ";

    char *input = strtok(s, d);

    while (input != NULL)
    { 
    wakesprint(input);
    input = strtok(NULL, d);
    }
    return 0;
}
