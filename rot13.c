#include "main.h"

/**
 * p_rot - function to print.
 * @vals: character to be checked
 *
 * Return: the result.
 */

int p_rot(va_list vals)
{
	int x, a;
	char *res;
	int value = 0;

	char inp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ abcdefghijklmnopqrstuvwxyz";
	char outp[] = "NOPQRSTUVWXYZABCDEFGHIJKLM nopqrstuvwxyzabcdefghijklm";

	res = va_arg(vals, char *);
	if (res == NULL)
	{
		res = "(null)";
	}
	for (x = 0; res[x] != '\0'; x++)
	{
		for (a = 0; inp[a] != '\0'; a++)
		{
			if (res[x] == inp[a])
			{
				_print(outp[a]);
				value++;
				break;
			}
		}
	}
	return (value);
}
