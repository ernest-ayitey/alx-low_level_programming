#include "main.h"
/**
 * print_alphabet - print all alphabet in lower case
 */
void print_alphabet(void)
{
	char letter;
	for (letter = 'a'; letter <= 'Z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
