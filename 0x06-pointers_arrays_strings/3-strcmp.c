#include "main.h"

/**
 * _strcmp - compares pointers to two strings
 * @s1: a pointer to first string
 * @s2: a pointer to second string
 * Return: s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
