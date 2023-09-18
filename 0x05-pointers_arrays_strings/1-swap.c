#include "main.h"
/**
 * swap_int - runs code
 * @a: parameter as pointer
 * @b: parameter as pointer
 * Return: end of code
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
