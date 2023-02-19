#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int d;

	d = 0;
	while
		(d < 10)
		{
			putchar(d + '0');
			d++;
		}
	putchar('\n');
	return (0);
}

