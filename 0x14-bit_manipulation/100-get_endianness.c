#include <stdio.h>

/**
 * get_endianness -  function that checks the endianness.
 *
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int s = 1;
	char *c = (char *) &s;

	return (*c);
}
