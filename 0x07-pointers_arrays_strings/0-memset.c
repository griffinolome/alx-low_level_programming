#include "main.h"
/**
 * _memset - runs the code
 * @s: parameter 1
 * @b: parameter 2
 * @n: parameter 3
 * Return: indicates end of code
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
