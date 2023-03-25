#ifndef _printf_
#define _printf_
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int _print(char c);
int _printf(const char *format, ...);
void _rec_bi(int n);
int _p_bin(va_list vals);
int p_str(va_list vals);
int p_char(va_list vals);
void rec_int(int i);
int p_int(va_list vals);
int _val_ch(char name);
int p_invalid(char xx, char ff, int co);
int _spec_f(char ff, va_list vals);
int p_for(const char *ff, va_list vals);


/**
 * struct value_format - it is struct
 * @x: the specifier
 * @f: the function of struct
 */

typedef struct value_format
{
	char *x;
	int (*f)(va_list vals);
} vf;

#endif
