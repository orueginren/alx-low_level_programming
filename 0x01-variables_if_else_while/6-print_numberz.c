#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: 'Prints all single digit numbers of base 10 starting from 0'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	i = 48;

	while (i < 58)
	{
		putchar (i);
		i++;
	}
	putchar('\n');
	return (0);
}
