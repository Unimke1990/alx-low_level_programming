#include <stdlib.h>
#include <stdio.h>
/**
 * main - starting point of the program
 * Return: always (0)
 */

int main(void)
{
int al = 'a';
int j = 'z';

while (al <= j)
{
putchar(al);
al++;
}
putchar('\n');
return (0);
}
