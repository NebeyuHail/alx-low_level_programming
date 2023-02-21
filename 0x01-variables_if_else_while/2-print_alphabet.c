#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
  *main - Entry point
  *Deescrition: 'Print alphabets lowercase'
  *Return: Always 0
  */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
