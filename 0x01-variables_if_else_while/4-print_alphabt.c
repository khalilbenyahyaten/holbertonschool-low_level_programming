#include<stdio.h>
/**
*main - function main
*
*Description: prints the alphabet without e and q
*
*Return: 0
*/
int main(void)
{
char i;

for (i = 'a'; i <= 'z'; i++)
{
if ((i != 'q') && (i != 'e'))
{
putchar(i);
}
}
putchar('\n');
return (0);
}
