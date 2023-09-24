#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, b;

		for (i = 0; i < n; i++)
		{
			for (b = 0; b < n; b++)
			{
				if (b == i)
					_putchar('\\');
				else if (b < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
