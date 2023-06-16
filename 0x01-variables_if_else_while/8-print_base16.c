#include <stdio.h>

/**
 * main - Entry point
 * program that prints all the numbers of base 16 in lowercase,
 *
 * Return: Always 0(indicating Success)
 *
 */
int main(void)
{
	int i;
	for (i = 0; i < 16; i++)
	{
		if (i < 10)
		{
			putchar(i + '0');  /* Print digits 0-9 */
	       	} else 
		{
			putchar(i - 10 + 'a');  /* Print lowercase letters a-f */
		}
	}
	putchar('\n');  /* Print a new line */
	return (0);
}
