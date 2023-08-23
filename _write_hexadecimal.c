#include "main.h"

/**
 * _write_hexadecimal - takes care of converting an integer to a hexadecimal string representation
 * and then printing it character by character using _writechar.
 *
 * @num: the unsigned integer to be converted
 * Return: returns the buffer length.
*/

int _write_hexadecimal(unsigned int num, char case_type)
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
        digit = num % 16;
        if (digit < 10)
            buffer[length++] = digit + '0';
        else
            buffer[length++] = digit - 10 + case_type;
        num /= 16;
    }

    for (i = (length - 1); i >= 0; i--)
    {
        _writechar(buffer[i]);
    }

    return (length);
}
