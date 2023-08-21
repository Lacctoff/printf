#include "main.h"
#include <unistd.h>

/**
 * _write - Writes a string to the standard output
 * @str: The string to be written
 * @length: The length of the string
 */
void _write(char *str, int length)
{
	write(1, str, length);
}

