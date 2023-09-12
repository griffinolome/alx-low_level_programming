#include "main.h"
/**
 * _abs - runs the code
 * @x: parameter
 * Return: always 0
 */
int _abs(int x)
{
	if (x < 0)
		return (-x);
	else if (x >= 0)
	{
		return (x);
	}

	return (0);
}
