#include <stdio.h>
#include <stdlib.h>
/**
 * main - minimum number of coins to make change
 *
 *
 *@argc: integer
 *@argv: integer
 *
 *
 *Return: 0 or 1
 */
int main(int argc, char *argv[])
{
int x = 0, cents = 0;

if (argc != 2)
{
printf("Error\n");
return (1);
}
x = (atoi(argv[1]));
if (x < 0)
{
printf("0\n");
return (0);
}
if (x >= 25)
{
cents = x / 25;
x = x % 25;
}
if (x >= 10)
{
cents += x / 10;
x = x % 10;
}
if (x >= 5)
{
cents += x / 5;
x = x % 5;
}
if (x >= 2)
{
cents += x / 2;
x = x % 2;
}
cents += x / 1;
printf("%d\n", cents);
return (0);
}
