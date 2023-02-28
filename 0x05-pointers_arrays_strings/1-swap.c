/**
 * swap_int - swap variabele value
 * @a:pointera
 * @b:pointerb
 * Return: void
 */

void swap_int(int *, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
