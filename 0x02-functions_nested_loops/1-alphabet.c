#include "main.h"

/**
 * print_alphabet - utilizes _putchar function to print a - z in lower case
 */

void print_alphabet(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; ++lc)
		_putchar(lc);

	_putchar('\n');
}
