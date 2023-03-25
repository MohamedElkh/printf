#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * _printf - function to print
 * @format: the character to be checked
 *
 * Return: the result.
 */

int _printf(const char *format, ...)
{
	int len = 0;
	va_list vals;

	if (format == NULL)
	{
		return (-1);
	}
	va_start(vals, format);

	len = p_for(format, vals);
	va_end(vals);
	return (len);
}
