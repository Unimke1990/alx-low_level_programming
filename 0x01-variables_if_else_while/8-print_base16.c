#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that prints all elements of base 16
 *
 * Return: always (0)
 */

int main(void)
{
int base;

for (base = 48; base < 58; base++)
{
putchar(base);
}
for (base = 97; base < 103; base++)
{
putchar(base);
}
putchar('\n');
return (0);
}

