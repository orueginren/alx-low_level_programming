#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: 'Prints the lowercase alphabet in reverse'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l;

	l = 'z';

	while (l >= 'a')
	{
		putchar(l);
		l--;
	}
	putchar('\n');
	return (0);
}
