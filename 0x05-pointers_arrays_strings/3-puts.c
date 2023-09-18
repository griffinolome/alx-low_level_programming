#include "main.h"
/**
 * _puts - runs the code
 * @str: parameter as string
 * Return: end of code
 */
void _puts(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
