#include "main.h"

/**
 * more_numbers - print more numbers
 */

void more_numbers(void)
{
int a, j;

for (a = 1; a <= 10; a++)
{
for (j = 0; j <= 14; j++)
{
if (j >= 10)
_putchar('1');
_putchar (j % 10 + '0');
}
_putchar('\n');
}
}
