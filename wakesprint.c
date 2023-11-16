#include "wakesshell.h"

/**
* wakesprint - is a print function in C.
*
* @str : a string to be printed.
*
* Return : void.
*/

void wakesprint (const char *str)
{
write(STDOUT_FILENO, str, strlen(str));
}
