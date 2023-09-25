#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */

void print_rev(char *s)
{
if (*s == '\0')
{
return;
}
print_rev(s + 1);
_putchar(*s);
_putchar('\n');
}
