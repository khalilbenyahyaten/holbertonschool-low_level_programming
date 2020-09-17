#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main function
 *
 * Return: Always 0
 */
int main(void)
{
	long int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 > 5)
	{
		printf("Last digit of %d is %i and is greater than 5\n", n, (n % 10));
	}
	else if (n % 10 == 0)
	{
		printf("last digit of %d is %i and is 0\n", n, n % 10);
	}
	else
	{
		printf("last digit of %d is %i and is less than 6 and not 0\n", n, n % 10);
	}
	return (0);
}
