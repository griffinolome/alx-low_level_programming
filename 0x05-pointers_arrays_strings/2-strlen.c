#include "main.h"
/**
 * _strlen - runs the code
 * @s: parameter as pointer
 * Return: end of code
 */
int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;
	return (count);
}
