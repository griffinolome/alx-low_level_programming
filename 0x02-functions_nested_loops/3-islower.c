#include "main.h"
/**
 * _islower - runs code
 *@c: parameter to be checked
 * Return: always 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
