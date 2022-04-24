#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int _putchar(char c);
char *buffer(char *buffer);
void c_file(int fd);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

void c_file(int fd)
{
	int i;
	i = close(fd);

	if (i == 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit (100);
	}
}

char *buffer(char *buffer)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STERR_FILENO, "Error: Can't write to $s\n", buffer);
		exit(99);
	}
	return (buf);
}
#endif
