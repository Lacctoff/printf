#include "main.h"

/**
 * _writechar - writes the character c to stdout(standard output)
 * @c: this denotes the character to print
 *
 * Return: on success return 1.
 * on error, -1 is returned, and error number is set appropraitely.
 */

int _writechar(char c)
{
	return (write(1, &c, 1));
}
