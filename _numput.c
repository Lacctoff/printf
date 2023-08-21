#include "main.h"

int _itoa(int num, char *buffer);
void _reverse(char *str, int length);
void _write(char *str, int length);
/**
 * _numput - Prints an integer to the standard output
 * @num: The integer to be printed
 *
 * Return: The number of characters printed
 */
int _numput(int num)
{
	char buffer[20];
	int length = _itoa(num, buffer);

	_write(buffer, length);
	return (length);
}

/**
 * _itoa - Convert an integer to a string
 * @num: The integer to be converted
 * @buffer: The buffer to store the result string
 *
 * Return: The length of the converted string
 */
int _itoa(int num, char *buffer)
{
	int length = 0;
	int is_negative = 0;


	if (num < 0)
	{
		is_negative = 1;
		num = -num;
		length++;
	}

	do {
		buffer[length++] = '0' + (num % 10);
		num /= 10;
	} while (num > 0);


	if (is_negative)
	{
		buffer[length++] = '-';
	}

	_reverse(buffer, length);

	return (length);
}

/**
 * _reverse - Reverse a string in-place
 * @str: The string to be reversed
 * @length: The length of the string
 */
void _reverse(char *str, int length)
{
	int i, j;
	char temp;

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
}

