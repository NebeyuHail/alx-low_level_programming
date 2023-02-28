#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string to reverse
 * Return: nothing
 */

void rev_string(char *s)
{
	int n  = 0;
	int nam = 0;
	char change;

	while (*(s + n) != '\0')
		n += 1;
	n -= 1;

	while (nam < n)
	{
		change = s[n];
		s[n] = s[nam];
		s[nam] = change;
		nam++;
		n--;
	}
}
