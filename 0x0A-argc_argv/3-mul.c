#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("error\n");
return (1);
}

else
{
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
}
return (0);
}
