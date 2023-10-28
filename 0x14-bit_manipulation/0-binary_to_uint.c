#include "main.h"
/**
  * binary_to_uint - converts a binary number to an
  * unsigned int
  * @b: the binary number to convert
  * Return: the converted unsigned int
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int len, i, a, sum, pow;
	int base;

	base = 2;
	sum = 0;
	pow = 1;

	if (b == NULL)
	return (0);
	for (len = 0; b[len] != '\0'; len++)
		;
	if (len == 1 && (b[0] == '0' || b[0] == '1'))
		return (b[0] - 48);
	for (i = 0; b[i] != '\0'; i++)
	{
	if (b[i] != '0' && b[i] != '1')
	return (0);
	for (a = len - 1; a > 0; a--)
	pow = pow * base;
	sum = sum + (pow * (b[i] - 48));
	len--;
	pow = 1;
	}
	return (sum);
}
