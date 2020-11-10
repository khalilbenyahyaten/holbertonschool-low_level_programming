#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "holberton.h"
/**
 * append_text_to_file - appends text at the end of a file
 *
 *@filename: file to append text into
 *@text_content: text to append
 *
 *Return: 1 for success or -1 for fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, w, i = 0;

if (filename == NULL)
return (-1);
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);
if (text_content != NULL)
{
while (text_content[i] != '\0')
i++;
}
w = write(fd, text_content, i);
if (w == -1)
return (-1);
close(fd);
return (1);
}
