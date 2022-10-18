#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: 'Prints all possible different combinations of two digits'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ones;
	int tens;

	for (tens = '0'; tens <= '9'; tens++)
	{
		for (ones = (tens + 1); ones <= '9'; ones++) /* ones ten+1*/
		{
			putchar(tens);
			putchar(ones);

			if (tens != '8' || ones != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
