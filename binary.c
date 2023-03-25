#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * _rec_bi - function to print binary
 * @n: the character to be checked.
 *
 * Return: nothing.
 */

void _rec_bi(int n)
{
	unsigned int x;

	x = n;
	if (x / 2)
	{
		_rec_bi(x / 2);
	}
	_print(x % 2 + '0');
}

/**
 * _p_bin - function to convert int into binary
 * @vals: the character to be checked.
 *
 * Return: the result.
 */

int _p_bin(va_list vals)
{
	int bi = 0, knew = 0;
	unsigned int i = 0;

	knew = va_arg(vals, int);
	i = knew;
	if (knew < 0)
	{
		_print('1');
		knew *= -1;
		i = knew;
		bi += 1;
	}
	while (i > 0)
	{
		i /= 2;
		bi++;
	}
	_rec_bi(knew);
	return (bi);
}

