#include <stdio.h>

/**
 * main - Entry point
 *
 * This program prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0(indicating Success)
 *
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = i; j <= 99; j++)
		{
			int i_tens = i / 10;
			int i_ones = i % 10;
			int j_tens = j / 10;
			int j_ones = j % 10;

			putchar('0' + i_tens);
			putchar('0' + i_ones);
			putchar(' ');
			putchar('0' + j_tens);
			putchar('0' + j_ones);

			if (i != 99 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
