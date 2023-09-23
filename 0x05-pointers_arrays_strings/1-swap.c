#include <stdio.h>
#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 *
 * @a: integer to be swaped
 * @b: another integer to be swaped
 * Return: nothing
 *
 */

void swap_int(int *a, int *b)
	{
		*a = 98;
		*b = 42;
		*a = *b;
		*b = *a;
}
