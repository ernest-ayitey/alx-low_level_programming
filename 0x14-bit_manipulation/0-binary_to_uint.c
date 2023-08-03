#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number
 * Return: the converted number, or 0 if invalid input
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_val = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		dec_val = (dec_val << 1) + (b[i] - '0');
	}
	return (dec_val);
}
