#include "main.h"

/**
 * writes a function that checks for a digit 0-9
 * returns 1 if c = 0-9
 * returns 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}
