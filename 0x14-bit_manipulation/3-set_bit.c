#include "main.h"
/**
 * set_bit - sets the bit at index 'index' to 1 in the decimal
 * @n: pointer to the decimal number
 * @index: index of the bit to be set
 * Return: 1 if the operation is successful or -1 if
 * the index is out of range
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int bit = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	bit = bit << index;
	*n = (*n | bit);
	return (1);
}
