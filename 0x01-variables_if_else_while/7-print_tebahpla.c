#include <stdlib.h>
#include <stdio.h>
/**
 * main - program that prints the alphabeth in reverse
 *
 * Return: always (0)
 */

int main(void)
{
char alphabeth = 'z';
while (alphabeth >= 'a')

{
printf("%c", alphabeth);
alphabeth--;
}
putchar('\n');
return (0);
}
