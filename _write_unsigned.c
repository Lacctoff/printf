#include "main.h"

/**
 * write_unsigned - this prints an unsigned integer
 * @num: this is the input int
 * Return: returns an integer.
 */

int write_unsigned(unsigned int num)
{
	/*Buffer to store the converted number as a string*/
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
		digit = num % 10;
		buffer[length++] = digit + '0';
		num /= 10;
	}

	for (i = (length - 1); i >= 0; i--)
	{
		_writechar(buffer[i]);
	}
	return (length);
}
