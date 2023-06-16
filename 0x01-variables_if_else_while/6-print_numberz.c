#include <stdio.h>

/**
 * main - Entry point
 * This program print the number 1 to 10 on a new line
 *
 * Return: Always 0 (indicating Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		putchar('0' + i);

	putchar('\n');
	return (0);
}
