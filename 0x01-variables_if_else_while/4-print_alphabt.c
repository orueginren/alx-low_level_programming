#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: 'Alphabets in lowercase'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l;

	l = 'a';

	while (l <= 'z')
	{
		if ((l != 'e') && (l != 'q'))
		{
			putchar(l);
			l++;
		}
		else
		{
			l++;
		}
	}
	putchar('\n');

	return (0);
}
