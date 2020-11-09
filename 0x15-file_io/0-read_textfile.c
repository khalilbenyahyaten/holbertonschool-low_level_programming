#include "holberton.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * read_textfile - reads from a text file
 *
 *@filename: file to read from
 *@letters:
 *
 *Return: the number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t r, w;
char *buf;

if (filename == NULL)
{
return (0);
}
buf = malloc(sizeof(char) * letters);
if (buf == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
{
return (0);
}
r = read(fd, buf, letters);
if (r == -1)
return (0);
close(fd);
w = write(STDOUT_FILENO, buf, r);
if (r != w)
return (0);
return (w);
}
