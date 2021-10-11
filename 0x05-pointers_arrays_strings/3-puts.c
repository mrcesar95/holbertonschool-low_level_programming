#include "main.h"

/**
*_puts - entry point

@str : Ponit to the string


*Return: Length of string
*/

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

