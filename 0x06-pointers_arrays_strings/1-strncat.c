#include "main.h"

/**
 * _strncat - concatenates two strings using src
 * @dest: string to be appended on
 * @src: string to be appended on
 * @n: number of bytes from src
 * Return: Return a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int num = 0, dest_len = 0;

	while (dest[num++])
		dest_len++;

	for (num = 0; src[num] && num < n; num++)
		dest[dest_len++] = src[num];
	return (dest);
}
