#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * p_str - a function to print string
 * @vals: the character to be checked
 *
 * Return: the length of st.
 */

int p_str(va_list vals)
{
	char *val = va_arg(vals, char *);
	int x = 0;

	if (val != NULL)
	{
		for (x = 0; val[x] != '\0'; x++)
		{
			_print(val[x]);
		}
		return (x);
	}
	_print('(');
	 _print('n');
	  _print('u');
	   _print('l');
	    _print('l');
	     _print(')');
	     return (6);
}

/**
 * p_char - print character
 * @vals: the character to be checked
 *
 * Return: the result.
 */

int p_char(va_list vals)
{
	_print(va_arg(vals, int));
	return (1);	
}

/**
 * rec_int - function to print
 * i: character to be checked.
 *
 * Return: nothing.
 */

void rec_int(int i)
{
	unsigned int x;

	x = i;
	if (x / 10)
	{
		rec_int(x / 10);
	}
	_print(x % 10 + '0');
}

/**
 * p_int - function to print int
 * @vals: the character to be checked.
 *
 * Return: the result.
 */

int p_int(va_list vals)
{
	unsigned int res = 0;
	int i = 0, co = 1;

	res = va_arg(vals, int);
	i = res;

	if (i < 0)
	{
		_print('-');
		i *= -1;
		res = i;
		co += 1;
	}
	while (res > 9)
	{
		res /= 10;
		co++;
	}
	rec_int(i);
	return (co);
}
