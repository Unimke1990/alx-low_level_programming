#include <stdlib.h>
#include <stdio.h>
/**
 * main - starting point of the program
 * Return: always (0)
 */

int main(void)
{
int al = 'a';

while (al <= 'z')
{
putchar(al);
al++;
}
int j = 'A';

while (j <= 'Z')
{
putchar(j);
j++;
}

putchar('\n');
return (0);
}
