#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *cal;
	int i, b = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	cal = malloc(sizeof(char) * (i + 1));

	if (cal == NULL)
		return (NULL);

	for (b = 0; str[b]; b++)
		cal[b] = str[b];

	return (cal);
}

