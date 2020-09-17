#include <stdlib.h>
#include <time.h>
/**
*main - prints whether a number is positive or negative
*
*Description: prints a message whether the number is positive or negative
*
*Return: returns 0
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf(n, "is positive\n");
}
else if (n == 0)
{
printf(n, "is zero\n");
}
else
{
printf(n, "is negative\n");
}
return (0);
}
