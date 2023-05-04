#ifndef MAIN_H
#define MAIN_H

#include <stddef.h> /* for size_t */

/* Function 0: binary_to_uint */
unsigned int binary_to_uint(const char *b);

/* Function 1: print_binary */
void print_binary(unsigned long int n);

/* Function 2: get_bit */
int get_bit(unsigned long int n, unsigned int index);

/* Function 3: set_bit */
int set_bit(unsigned long int *n, unsigned int index);

/* Function 4: clear_bit */
int clear_bit(unsigned long int *n, unsigned int index);

/* Function 5: flip_bits */
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/* Function 6: get_endianness */
int get_endianness(void);

/* Helper function: _putchar */
int _putchar(char c);

#endif /* MAIN_H */

