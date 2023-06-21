#include "main.h"
/**
 * _isapha - checks alphabet character
 * @c: the character to be hecked
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
