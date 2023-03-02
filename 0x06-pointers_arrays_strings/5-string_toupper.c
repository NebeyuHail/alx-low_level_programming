#include "main.h"

/**
 * *string_toupper - change all lowercase letters to uppercase
 * @str: string to be changed
 * Return: A pointer to the changed string
 */
char *string_toupper(char *str)
{
	int num = 0;

	while (str[num])
	{
		if (str[num] >= 'a' && str[num] <= 'z')
			str[num] -= 32;
		num++;
	}

	return (str);
}
