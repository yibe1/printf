#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

/**
 * _printf - print chracters
 * @format: list of arg
 *
 * Return: number of characters printed
 */
int  _putchar(char ch){
	write(1,&ch,1);
	return 0;
}
int _putnum(long int num){
	printf("%ld",num);

	return 0;
}
int _printf(const char *format, ...)
{

	int i = 0;
	int size = strlen(format);
	va_list valist;
	va_start(valist,format);
	
	while(i<size){
		char c = format[i];
		if(c == '%'){
			i++;
			c = format[i];
		switch(c){
		case 'd':
			i++;
			_putnum(va_arg(valist, long int));
				break;
				}
		}else{
			_putchar(c);
			i++;
		}
		
	}
	return 0;
}

/*int main(void){

	_printf("Test for printf %d",56788);
	return 0;

	}*/
