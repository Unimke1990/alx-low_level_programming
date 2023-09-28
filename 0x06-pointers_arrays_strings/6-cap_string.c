#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */

char *cap_string(char *str)
{
int m, j;
char c[] = {44, 59, 46, '!', '?', '"', '(', ')', '{', '}', ' ', '\t', '\n'};

for (m = 0; str[m] != '\0'; m++)
{
if (m == 0 && str[m] >= 'a' && str[m] <= 'z')
{
str[m] = str[m] - 32;
}

for (j = 0; c[j] != '\0'; j++)
{
if (c[j] == str[m] && (str[m + 1] >= 'a' && str[m + 1] <= 'z'))
{
str[m + 1] = str[m + 1] - 32;
}
}
}
return (str);
}
