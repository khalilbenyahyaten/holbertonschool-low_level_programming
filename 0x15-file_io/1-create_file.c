#include "holberton.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * create_file - create a file
 *
 *@filename: file name
 *@text_content: text to be written in file
 *
 *Return: -1 if failed or 1 in case of success
 */
int create_file(const char *filename, char *text_content)
{
int fd, r, i = 0;

if (filename == NULL)
return (-1);
fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
if (fd == -1)
return (-1);
while (text_content[i] != '\0')
i++;
if (i == 0)
{
return (1);
}
r = write(fd, text_content, i);
if (r < 0)
{
return (-1);
}
close(fd);
return (1);
}
