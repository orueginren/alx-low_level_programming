#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: 'Prints all the numbers of base 16 in lowercase'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char l;

	i = 48;

	while  (i < 58)
	{
		putchar(i);
		i++;
	}
	l = 'a';
	while (l <= 'f')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}

