#include<stdio.h>
/**
*main - main function
*
*Description: prints base 16 numbers
*
*Return: 0
*/
int main(void)
{
int i;
for (i = 48 ; i <= 57; i++)
{
putchar(i);
}

for (i = 'a'; i <= 'f' ; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
