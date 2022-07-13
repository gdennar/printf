#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int _printf(const char *format, ...);
int (*check_specifier(char*))(va_list);
/**
 * struct func - struct for specifier to pointer
 * @t: character to compare
 * @f: function to handle
 */
typedef struct func
{
	char *t;
	int (*f)(va_list);
}func_t;

#endif
