#include "main.h"

/**
 * _puts - Prints a string
 * @str: string to be printed
 */
void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str++);
	}

	_putchar('\n');
}
