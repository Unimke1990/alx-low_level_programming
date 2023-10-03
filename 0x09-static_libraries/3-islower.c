#include "main.h"
/**
 * _islower - detects lowercase and uppercase
 *
 * Description: use _putchar to print
 *@c: collect alphabets
 * Return:(1) if c is lowercase, otherwise (0)
 *
 */

int _islower(int c)
{
int lowercase = 0;
char i;
for (i = 'a'; i < 'z'; i++)
{
if (i == c)
{
lowercase = 1;
}
}
return (lowercase);
}
