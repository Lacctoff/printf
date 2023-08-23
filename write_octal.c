#include "main.h"

/**
 * write_octal - takes care of converting an integer to its octal string representation
 * and then printing it character by character using _writechar.
 *
 * @num: the unsigned integer to be converted
 * Return: returns the buffer length.
*/


int write_octal(unsigned int num)
{
	char buffer[50];
	int length = 0;
	int digit;
	int i;

	if (num == 0)
	{
		_writechar('0');
		return (1);
	}

	while (num != 0)
	{
		digit = num % 8;
		buffer[length++] = digit + '0';
		num /= 8;
	}

	for (i = (length - 1); i >= 0; i--)
	{
		_writechar(buffer[i]);
	}

	return (length);
}
