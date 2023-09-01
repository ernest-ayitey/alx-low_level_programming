#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: decimal number
 * @index: index of the bit to retrieve
 * Return: the value of the bit at the specified index,
 *  or -1 if the index is invalid
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);

	bit = (n >> index) & 1;
	return (bit);
}
