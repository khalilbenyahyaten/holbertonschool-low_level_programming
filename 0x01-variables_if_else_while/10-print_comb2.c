#include<stdio.h>
/**
* main - main function
*
* Description: prints numbers from 00 to 99
*
* Return: 0
*
*/
int main(void)
{
int i, a;
for (i = '0'; i <= '9' ; i++)
{
for (a = '0'; a <= '0'; a++)
{
if (i != '0' || a != '0')
{
putchar (',');
putchar (' ');
}
putchar (i);
putchar (a);
}
}
putchar ('\n');
return (0);
}
