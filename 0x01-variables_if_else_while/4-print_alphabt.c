 #include <stdlib.h>
 #include <stdio.h>

/**
 * main - starting point of the program
 *
 * Return: always (0)
 */

int main(void)
{

char i;
for (i = 'a'; i <= 'z'; i++)
{
if (i == 'e' || i == 'q')
{
continue;
}

putchar(i);
}

putchar('\n');

return (0);
}
