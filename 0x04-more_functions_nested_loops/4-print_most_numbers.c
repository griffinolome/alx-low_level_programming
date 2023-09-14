#include "main.h"
/**
 * print_most_numbers - runs the code
 * Return: ends the code
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0 ; i <= 10 ; i++)
	{
		if (i != 2 && i != 4)
			_putchar(i + '0');
	}
	_putchar ('\n');
}
