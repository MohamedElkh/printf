#include "main.h"

/**
 * p_rot - function to print
 * @vals - character to be checked.
 *
 * Return: the result.
 */

int p_rot(va_list vals)
{
	int x, y, value = 0;
	char *res;

	char inp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ abcdefghijklmnopqrstuvwxyz";
	char outp[] = "NOPQRSTUVWXYZABCDEFGHIJKLM nopqrstuvwxyzabcdefghijklm";

	res = va_arg(vals, char *);
	if (res == NULL)
	{
		res = "(null)";
	}
	else
	{
	for (x = 0; res[x] != '\0'; x++)
	{
		for (y = 0; inp[y] != '\0'; y++)
		{
			if (res[x] == imp[y])
			{
				_print(outp[y]);
				value++;
				break;
			}
		}
	}
	}
	return (value);
}
