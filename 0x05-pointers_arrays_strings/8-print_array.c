#include "main.h"
/**
 * print_array - runs the code
 * @n: parameter
 * @a: parameter two
 * Return: end of code
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
