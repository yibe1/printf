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
int _printtext(char *ch){
	int i=0;
	while(ch[i] != '\0'){
		_putchar(ch[i]);
		i++;
	}

	return 0;
}
int _printf(const char *format, ...)
{

	int i = 0;
	char c;
	va_list valist;
	int size;
	va_start(valist,format);
	size = strlen(format);
	c = format[i];
	while(i<size){
		
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
			_putchar(va_arg(valist, int));
			break;
		case 's':
			i++;
			_printtext(va_arg(valist, char*));
			break;
		case '%':
			i++;
			_putchar('%');
			break;
		case '\0':
			break;
		}
		}else{
			_putchar(c);
			i++;
			
		}
		
		c = format[i];
	}
	va_end(valist);
return i;
}

/*int main(void){

int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    // _printf("Length:[%d, %i]\n", len, len);
    //printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    //_printf("Unsigned:[%u]\n", ui);
    //printf("Unsigned:[%u]\n", ui);
    //_printf("Unsigned octal:[%o]\n", ui);
    //printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    //_printf("Address:[%p]\n", addr);
    //printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    //_printf("Unknown:[%r]\n");
    //printf("Unknown:[%r]\n");
    return (0);
	}*/
