#include "main.h"
/**
 * get_endianness - checks if a machine is little or big endian
 * Return: true for little endian, false for big endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	return (*c == 1);
}
