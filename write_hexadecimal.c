#include "main.h"

/**
 * write_hexadecimal - convert memory address into a hexadecimal string
 * @value: memory addrss to be converted
 * Return: value returned to be returned?
 */

int write_hexadecimal(uintptr_t value)
{
	char hex_digits[] = "0123456789ABCDEF";
	char hex_string[16];

	int index = 0;
	int i;

	do {
		hex_string[index++] = hex_digits[value % 16];
		value /= 16;
	} while (value > 0);

	for (i = index - 1; i >= 0; i--)
	{
		_writechar(hex_string[i]);
	}

	return (index);
}
