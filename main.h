#ifndef MAIN_H_
#define MAIN_H_
#include <stdarg.h>
/**
 * struct print - structur
 * @t: type to print
 * @f: function to print
 */
typedef struct print
{
	char *t;
	int (*f)(va_list);
} print_t;

int _putchar(char c);
int _putnum(long int num);
int _printf(const char *format, ...);
int print_c(va_list c);
int print_s(va_list s);
int print_i(va_list i);
#endif
