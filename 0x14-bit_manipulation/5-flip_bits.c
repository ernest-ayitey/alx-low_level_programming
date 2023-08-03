#include "main.h"

/**
 * flip_bits - Calculate the number of bits needed to flip
 *             from one number to another.
 * @n: The source number.
 * @m: The destination number.
 * Return: The number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int bit_count = 0;

	while (xor_result > 0)
	{
		bit_count += xor_result & 1;
		xor_result >>= 1;
	}

	return (bit_count);
}

