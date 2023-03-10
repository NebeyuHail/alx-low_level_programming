#include "main.h"

/**
 * _strncpy -copies string
 * @dest: buffer storing the string
 * @src: source string
 * @n: max number of bytes to copy from src
 * Return: A pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && *(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i != n)
		dest[i++] = '\0';
	return (dest);
}
