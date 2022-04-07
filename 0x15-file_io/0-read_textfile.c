#include "main.h"
/**
 * read_textfile - Function that reads a text file
 * and prints it to the POSIX standar output
 * @filename: Pointer
 * @letters: number of letters it should read and print
 * Return: The actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filed;
	ssize_t vwrite, vread;
	char *text;

	if (filename == NULL)
		return (0);

	text = malloc(sizeof(char) * (letters));
	if (text == NULL)
		return (0);

	filed = open(filename, O_RDONLY);/*Open the file with the flag Read Only*/
	if (filed == -1)
	{
		close(filed);
		return (0);
	}
	vread = read(filed, text, letters);
	if (vread == -1)/*check if return an error*/
		return (0);
	vwrite = write(1, text, vread);
	if (vwrite == -1 || vwrite != vread)/*check if return an error*/
		return (0);

	close(filed);
	free(text);

	return (vwrite);
}
