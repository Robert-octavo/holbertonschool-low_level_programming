#include "main.h"
/**
 * main - Write a program that copies
 * the content of a file to another file.
 * @argc: Number of arguments
 * @argv: An array of pointer
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int filefrom, fileto, readfile, writefile;
	char *buf;

	if (argc != 3)
	{
		/*Print a file descriptor*/
		dprintf(STDERR_FILENO, "Usage: cp file_from_file_to\n");
		exit(97);

	}
	buf = buffer(argv[2]);
	filefrom = open(argv[1], O_RDONLY);
	fileto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	readfile = read(filefrom, buf, 1024);

	do {
		if (filefrom == -1 || readfile == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		writefile = write(fileto, buf, readfile);
		if (fileto == -1 || writefile == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		readfile = read(filefrom, buf, 1024);
		fileto = open(argv[2], O_WRONLY | O_APPEND);

	} while (readfile > 0);

	free(buf);
	c_file(filefrom);
	c_file(fileto);
	return (0);
}
