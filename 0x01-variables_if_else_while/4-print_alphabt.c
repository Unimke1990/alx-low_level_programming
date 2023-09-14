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
if (i == 'd' || i == 's')
{
continue;
}

putchar(i);
}

putchar('\n');

return (0);
}
