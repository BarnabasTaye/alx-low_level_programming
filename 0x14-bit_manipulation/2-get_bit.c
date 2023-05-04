#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: The number
 * @index: The index, starting from 0 of the bit to get
 *
 * Return: The value of the bit at index index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int max_bits = sizeof(unsigned long int) * 8 - 1;

	if (index > max_bits)
		return (-1);

	return ((n >> index) & 1);
}

