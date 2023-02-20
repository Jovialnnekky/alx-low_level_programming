#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */

int main(void)

{
	int k, n, m;

	for (k = '0'; k < '9'; k++)
	{

		for (n = k + 1; n <= '9'; n++)
		{

			for (m = n + 1; m <= '9'; m++)
			{
				if ((n != k) != m)
				{
					putchar(k);
					putchar(n);
					putchar(m);

					if (k == '7' && n == '8')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

