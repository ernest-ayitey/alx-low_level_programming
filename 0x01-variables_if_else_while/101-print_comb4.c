#include <stdio.h>

void printCombination(int a, int b, int c)
{
	putchar(a + '0');
	putchar(b + '0');
	putchar(c + '0');
	putchar(',');
	putchar(' ');
}
int main(void)
{
	int i, j, k;

	for (i = 0; i <= 7; i++)
	{
		for (j = i + 1; j <= 8; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				printCombination(i, j, k);
			}
		}
	}
	return (0);
}
