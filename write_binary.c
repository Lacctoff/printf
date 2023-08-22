#include "main.h"

/**
 * write_binary - converts int to binary.
 * @num: unsigned int as an input.
 * Return: length.
 */

int write_binary(unsigned int num)
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
		digit = num % 2;
		buffer[length++] = digit + '0';
		num /= 2;
	}

	for (i = (length - 1); i >= 0; i--)
	{
		_writechar(buffer[i]);
	}

	return (length);
}
