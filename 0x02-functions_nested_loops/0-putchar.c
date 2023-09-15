#include "main.h"
/**
 * main - program that prints _putchar
 *
 * Return: always (0) on success
 */

int main(void)
{

int i = 0;
char j[] = "_putchar";

while (i <= 7)
{
_putchar(j[i]);
i++;
}

_putchar('\n');
return (0);
}

