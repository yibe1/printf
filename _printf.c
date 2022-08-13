#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <stdarg.h>
#include <unistd.h>

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
	char c;
	va_list valist;
	va_start(valist,format);
	c = format[i];
	while(c != '\0'){
		
		if(c == '%'){
			i++;
			c = format[i];
		switch(c){
		case 'd':
			i++;
			_putnum(va_arg(valist, long int));
				break;
				
		case 'c':
			i++;
			_putchar(va_arg(valist, char));
			break;
		}
		}else{
			_putchar(c);
			i++;
		}
		c = format[i];
	}
       
	return i;
}

/*int main(void){

	_printf("Let's print a simple sentence.\n");
	return 0;

	}*/
