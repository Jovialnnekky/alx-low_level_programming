#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: Always 0
 */

int main(void)

{

	int k, n;

		for (k = 0; k <= 98; k++)
		{

			for (n = k + 1; n <= 99; n++)
			{
				putchar((k / 10) + '0');
				putchar((k % 10) + '0');
				putchar(' ');
				putchar((n / 10) + '0');
				putchar((n % 10) + '0');

				if (k == 98 && n == 99)
					continue;

				putchar(',');
				putchar(' ');
			}

		}
		putchar('\n');
		return (0);
}


