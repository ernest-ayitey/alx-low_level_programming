#include <stdio.h>
/**
 * main - Entry point
 * thiis program prints both lowercase and uppercase letters.
 *
 * Return: Alway 0 (indicating success)
 *
 */
int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';
	/* Print lowercase alphabet*/
	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}
	/* Print uppercase alphabet*/
	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}
	/* Print new line*/
	putchar('\n');
	return (0);
}
