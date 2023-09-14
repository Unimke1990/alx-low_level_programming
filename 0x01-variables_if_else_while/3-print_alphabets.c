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
int ab = 'A';

while (ab <= 'Z')
{
putchar(ab);
ab++;
}

putchar('\n');
return (0);
}
