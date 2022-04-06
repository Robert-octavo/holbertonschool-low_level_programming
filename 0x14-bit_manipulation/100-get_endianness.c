#include"main.h"
/**
 * get_endianness - function that checks the
 * endianness
 * you can check the code
 * https://cs-fundamentals.com/tech-interview/c/
 * c-program-to-check-little-and-big-endian-architecture
 * Return: 1 if it's little endian or 0 if it's big endian
 */
int get_endianness(void)
{
	unsigned int x = 0x76543210;
	char *c = (char *) &x;

	if (*c == 0x10)
		return (1);
	else
		return (0);
}
