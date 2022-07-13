#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int _printf(const char *format, ...);
int (*check_specifier(char*))(va_list);
unsigned int handl_buf(char *buf, char c, unsigned int ibuf);
int print_str(va_list arguments, char *buf, unsigned int ibuf);
int print_char(va_list arguments, char *buf, unsigned int ibuf);
/**
 * struct func - struct for specifier to pointer
 * @t: character to compare
 * @f: function to handle
 */
typedef struct func
{
	char *t;
	int (*f)(va_list, char *, unsigned int);
}func_t;

#endif
