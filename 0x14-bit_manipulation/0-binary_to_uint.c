#include "main.h"
/**
 * binaary_to_umit - converts a binary number to an 
 * unsigned int
 * @b: binary number
 * Return: the converted number, or 0 if invalid input
 */
unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
		return (0);

	unsigned int decimal_value = 0;

	for (int i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		decimal_value = (decimal_value << 1) | (b[i] - '0');
	}

