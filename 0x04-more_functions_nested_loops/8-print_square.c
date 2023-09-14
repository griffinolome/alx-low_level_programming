#include "main.h"
/**
 * print_square - runs code
 * @size: size of square
 * Return: end of code
 */
void print_square(int size)
{
	int x;
	int y;

	y = 0;

	if (size < 1)
		_putchar('\n');
	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			_putchar('#');
			x++;
		}
		_putchar('\n');
		y++;
	}
}
