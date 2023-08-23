#include "main.h"

int _printf(const char *format, ...);

/**
 * _printf - It processes a format string and a variable set of arguments,
 * _printf - It processes a format string and a variable set of arguments,
 * then formats and outputs the result
 * accordingly.
 *
 * @format: used to specify the desired output format
 * Return: returns the number of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list argList;
	unsigned int i;
	unsigned int count;
	int bites_count;
	int n;

	count = 0;

	if (!format || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}

	va_start(argList, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_writechar(format[i]);
			count++;
		}
		else
		{

			switch (format[i + 1])
			{
				case 'c':
					_writechar(va_arg(argList, int));
					count++;
					i++;
					break;
				case 's':
					bites_count = _strputss(va_arg(argList, char *));
					i += 1;
					count = (count + (bites_count - 1));
					break;
				case '%':
					_writechar('%');
					count++;
					break;
				case 'd':
				case 'i':
					n = va_arg(argList, int);

					if (n < 0)
					{
						_writechar('-');
						n = -n;
					}
					count += write_num(n);
					i++;
					break;
				case 'b':
					n = va_arg(argList, unsigned int);
					count += write_binary(n);
					i++;
					break;
				case 'p':
					count += write_pointer(va_arg(argList, void *));
					i++;
					break;
				case '+':
					if (format[i + 1] == 'd' || format[i + 1] == 'i')
					{
					int n = va_arg(argList, int);

					if (n >= 0)
					{
						_writechar('+');
					}
					count += write_num(n);
					i++;
					}
					break;
				case ' ':
					if (format[i + 1] == 'd' || format[i + 1] == 'i')
					{
					int n = va_arg(argList, int);

					if (n >= 0)
					{
						_writechar(' ');
					}
					count += write_num(n);
					i++;
					}
					break;
				case '#':
					if (format[i + 1] == 'x')
					{
						_writechar('0');
						_writechar('x');
						count += write_hexadecimal(va_arg(argList, unsigned int));
						i++;
					}
					break;
				default:
					break;

			}
		}
	}
	va_end(argList);
	return (count);
}
