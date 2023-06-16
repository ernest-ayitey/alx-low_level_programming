#include <stdio.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - Entry point of the program
 *
 *This program prints the alphabet in lowercase, followed by a new line
 *
 *Return: Always 0 (indicating success)
 */
int main()
{
	/* your code goes there */
	for (char c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
