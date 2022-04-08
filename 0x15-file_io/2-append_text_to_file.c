#include "main.h"
#include <string.h>
/**
 * apend_text_to_file - Function that create a file
 * @filename: Pointer
 * @text_content: content
 * Return: 1 on success -1 on faiulure
 */
int apend_text_to_file(const char *filename, char *text_content)
{
	int openf, writef, largo = 0;

	if (filename == NULL)
		return (-1);

	openf = open(filename, O_WRONLY | O_APPEND, 0600);
	if (openf == -1)
	{
		close(openf);
		return (-1);
	}
	if (text_content != NULL)
	{
		while (*(text_content  + largo) != '\0')
			largo++;
		writef = write(openf, text_content, strlen(text_content));
		if (writef == -1)
			return (-1);

	}
	close(openf);
	return (1);
}
