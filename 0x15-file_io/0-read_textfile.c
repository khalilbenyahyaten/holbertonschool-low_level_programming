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
 *
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
  int fd;
  char *buf = "";
  
if (filename == NULL)
    return (0);

 fd = open("filename", O_WRONLY);
  if (fd == 0)
    return (0);

  read(fd, buf, letters);
  printf("%s\n", buf);  
  close(fd);
return(letters);
}
