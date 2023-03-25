#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * _val_ch - function to validate the character
 * @name: the character to be checked
 *
 * Return: the result.
 */

int _val_ch(char name)
{
	char names[] = {'c', 's', 'd', 'i', 'b', '%'};
	int x = 0;

	while (names[x])
	{
		if (names[x] == name)
		{
			return (1);
		}
		x++;
	}
	return (0);
}

/**
 * p_invalid - function to be checked
 * @xx: the character to be checked
 * @ff: the character to be checked
 * @co: the number to be checked
 *
 * Return: the result.
 */

int p_invalid(char xx, char ff, int co)
{
	co += _print('%');

	if (xx == ' ')
	{
		co += _print(' ');
		co += _print(ff);
	}
	else
	{
		co += _print(ff);
	}
	return (co);
}

/**
 * _spec_f - print the right function
 * @ff: the specifier to be printed
 * @vals: the character to be checked
 *
 * Return: the result.
 */

int _spec_f(char ff, va_list vals)
{
	int x = 0;
	int len = 0;

	vf names[] = {
		{"c", p_char},
		{"s", p_str},
		{"d", p_int},
		{"i", p_int},
		{"b", _p_bin},
		{NULL, NULL}
	};

	while (names[x].x)
	{
		if (*names[x].x == ff)
		{
			len = names[x].f(vals);
		}
		x++;
	}
	return (len);
}

/**
 * p_for - function to print 
 * @ff: pointer to be checked
 * @vals: the character to be checked
 *
 * Return: the result.
 */

int p_for(const char *ff, va_list vals)
{
	int x = 0;
	int len = 0;

	while (ff && ff[x])
	{
		if (ff[x] == '%')
		{
			if (ff[x + 1] == '\0')
				return (-1);
			x++;
			while (ff[x] == ' ')
				x++;
			if (ff[x] == '%')
				len += _print(ff[x]);
			if (_val_ch(ff[x]) == 0)
			{
				len = p_invalid(ff[x - 1], ff[x], len);
			}
			else
			{
				len += _spec_f(ff[x], vals);
			}
		}
		else
		{
			len += _print(ff[x]);
		}
		x++;
	}
	return (len);
}
