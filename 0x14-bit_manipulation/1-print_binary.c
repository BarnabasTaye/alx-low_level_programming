#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to print in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	unsigned int bits = sizeof(unsigned long int) * 8;

	while (bits--)
	{
		if ((n >> bits) & mask)
			_putchar('1');
		else
			_putchar('0');
	}
}

