#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: 'Prints the alphabet in lowercase, and then in uppercase'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l;

	l = 'a';

	while (l <= 'z')
	{
		putchar(l);
		l++;
	}

	l = 'A';

	while (l <= 'Z')
	{
		putchar(l);
		l++;
	}

	putchar('\n');

	return (0);
}

