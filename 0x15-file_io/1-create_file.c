#include "main.h"
/**
 * create_file - Function that create a file
 * @filename: Pointer
 * @text_cointent: content
 * Return: 1 on success -1 on faiulure
 */
int create_file(const char *filename, char *text_content)
{
	int openf, writef, largo = 0;

	if (filename == NULL)
		return (-1);

	openf = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (openf == -1)
	{
		close(openf);
		return (-1);
	}
	if (text_content != NULL)
	{
		while (*(text_content  + largo) != '\0')
			largo++;
		writef = write(openf, text_content, largo);
		if (writef == -1)
		{
			write(STDOUT_FILENO, "fails", 6);
			return (-1);
		}

	}
	close(openf);
	return (1);
}
