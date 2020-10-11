#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 *
 *
 *@argc: integer
 *@argv: array of strings
 *
 *
 *Return: 0 or 1
 */
int main(int argc, char *argv[])
{
int x, j, i;

x = 0;
for (i = 1; i < argc; i++)
{
for (j = 0; j < argv[i][j]; j++)
{
if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
{
printf("Error\n");
return (1);
}
}
x = x + atoi(argv[i]);
}
printf("%d\n", x);
return (0);
}
