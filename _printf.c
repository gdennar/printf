#include <stdarg.h>
#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * _printf - prints out a formatted string
 * @format: char to print
 * @...: parameters
 * Return: number of char printed
 */

int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;
	int value = 0;
	va_list args;
	va_start(args, format);

	if (format == NULL)
		return (-1);

	while (format[i])
	{
		if (format[i] != '%')
		{
		value = write(1,&format[i],1);
		count = count + value;
		i++;
		continue;
		}

		if (format[i] == '%')
		{
			printf("I have encountered a percentage\n");
			break;
		}
	}

	va_end(args);
	return (count);
}
