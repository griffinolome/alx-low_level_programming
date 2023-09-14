#include "main.h"
/**
 * _isdigit - runs the code
 * @c: parameter for code
 * Return: found at end of code
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
