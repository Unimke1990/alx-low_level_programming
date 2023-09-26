#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */

void puts2(char *str)
{
int a = 0;
while (str[a] != '\0')
{
putchar(str[a]);
a += 2;
}
putchar('\n');
}
