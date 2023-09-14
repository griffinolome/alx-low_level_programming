#include "main.h"
/**
 * print_most_numbers - runs the code
 * Return: ends the code
 */
void print_most_numbers(void)
{
	int c;

	for (c = 48 ; c < 58 ; c++)
	{
		if (c != 50)
		{
			if (c != 52)
			{
				_putchar(c);
			}
		}
	}
	_putchar('\n');
}
