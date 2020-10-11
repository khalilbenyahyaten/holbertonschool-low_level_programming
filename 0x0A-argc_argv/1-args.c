#include <stdio.h>
/**
 * main - prints the number of arguments passed to a program
 *
 *
 *@argc: integer
 *@argv: unused array of chars
 *
 *
 *Return: 0
 */
int main(int argc, __attribute__((__unused__)) char *argv[])
{
if (argc != 0)
{
printf("%d\n", (argc - 1));
}
return (0);
}
