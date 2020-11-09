#include "holberton.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 *
 *
 *
 *
 *
 *
 *
 */
int create_file(const char *filename, char *text_content)
{
  int fd, r, i;


  if (filename == NULL)
    return (-1);
  fd = open(filename, O_CREAT, 0600);
  if (fd == -1)
    return (-1);
  for (i = 0; text_content[i] != '\0'; i++)
    {
    }
  if (i == 0)
    {
    close(fd);
    return (1);
    }  
r = read(fd, text_content, i);
  close(fd);  
if (r != -1)
    {
    return (1);
    }
  else
    {
    return (-1);
    }
}
