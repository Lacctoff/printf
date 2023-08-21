#include "main.h"

/**
 * _numput - Prints an integer to the standard output using snprintf
 * @num: The integer to be printed
 *
 * Return: The number of characters printed
 */
int _numput(int num)
{
	char buffer[20];
	int length = snprintf(buffer, sizeof(buffer), "%d", num);

	write(1, buffer, length);
	return (length);
}

