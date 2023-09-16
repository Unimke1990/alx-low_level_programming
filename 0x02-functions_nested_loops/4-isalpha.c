#include "main.h"
/**
 * _isalpha - checks for alphabetic char
 * @c - character to be checked
 * Return: 1 if c is a letter, and 0 otherwise
 */

int _isalpha(int c)
{

int i = c;
if ((i >= 97 && i <= 122) || (i >= 65 && i <= 90))
{
return (1);
}
else
{
return (0);
}
return (c);

}
