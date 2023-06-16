#include <stdio.h>

/**
 * main - Entry point
 * This program print the number 1 to 10 on a new line
 *
 * Return: Always 0 (indicating Success)
 */
int main(void)
{
	int i = 0;
	while (i <= 9)
	{
		putchar('0' + i);
		putchar('\n');
		i++;
	}
	return 0;
}
