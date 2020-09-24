#include <stdio.h>

/**
 *fizz_buzz - main function
 *
 *
 *
 *
 *Return: void
 *
 */
void fizz_buzz(void)
{
int i, x, y;

for (i = 1; i <= 100; i++)
{
x = i % 3;
y = i % 5;
if ((x != 0) && (y != 5))
{
printf("FizzBuzz ");
}
else if (x != 0)
{
printf("Fizz ");
}
else if (y != 0)
{
printf("Buzz ");
}
else
{
printf("%d", i);
}
printf("\n");
}
}
