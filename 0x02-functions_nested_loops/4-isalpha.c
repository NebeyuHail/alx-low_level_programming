#include "main.h"

/**
 * _isalpha - check if c is alphabet
 * @c: cahracter to be checked if it is alphabet
 * Return: Always 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	return (1);

	if (!((c >= 97) && (c <= 122)) || !((c >= 65) && (c <= 90)))
	return (0);

	return (0);
}
