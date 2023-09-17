#include "main.h"
/**
 * print_last_digit - this will get the last digit of a number
 *
 * @r: an integer input
 * Description: print using _putchar
 * Return:return last digit of r
 */

int print_last_digit(int r)
{
int a;

if (r < 0)
r = -r;

a = r % 10;

if (a < 0)
a = -a;

_putchar(a + '0');

return (a);
}
