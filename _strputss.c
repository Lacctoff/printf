#include "main.h"

/**
 * _strputss - prints a string followed by a new line to the stdout.
 * @str: input string.
 * Return: output count of the string as an integer.
 */

int _strputss(char *str)
{
	int outputCount = 0;

	for (outputCount = 0; str[outputCount] != '\0'; outputCount++)
	{
		_writechar(str[outputCount]);
	}
	return (outputCount);
}
