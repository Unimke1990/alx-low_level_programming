#include <string.h>
#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */

void puts_half(char *str)
{
int i;
int len = strlen(str);
int second_index = (len - 1) / 2;
for (i = second_index; i < len; i++)
{
putchar(str[i]);
}
putchar('\n');
}
