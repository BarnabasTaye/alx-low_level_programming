#include "main.h"

/**
 * binary_to_uint - Convert binary number to unsigned int
 * @b: binary string
 *
 * Return: converted number, or 0 if @b is NULL or contains non-binary chars
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);

		num <<= 1;
		num |= (*b - '0');
		b++;
	}

	return (num);
}

