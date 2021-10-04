#include "main.h"
/**
 * _islower - entry point
 *
 * Description: Prints the alphabet with _putcha
 * @c: character to check
 * Return: void
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
	return (0);
	}
}

