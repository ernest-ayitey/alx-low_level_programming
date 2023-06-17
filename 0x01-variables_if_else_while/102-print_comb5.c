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

	for (i = 0; i < 100; i++)
	{
		for (j = i; j < 100; j++)
		{
			/* Calculate the tens and ones digits of i*/
			int i_tens = i / 10;
			int i_ones = i % 10;
			/* Calculate the tens and ones digits of j*/
			int j_tens = j / 10;
			int j_ones = j % 10;
			/* Print the combination of numbers*/
		       	putchar('0' + i_tens);
			putchar('0' + i_ones);
			putchar(' ');
			putchar('0' + j_tens);
			putchar('0' + j_ones);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return 0;
}
