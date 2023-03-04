#include "main.h"

/**
 * _islower - return 1 if c is lowercase
 * return 0 if c is uppercase
 * @c: contant to be tested
 * Return: Always 0
 */

int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
		return (1);

	if ((c >= 65) && (c <= 90))
		return (0);
	return (0);
}
