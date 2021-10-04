#include "main.h"
/**
 * _isaplha - entry points
 *
 * Description: Returns one if Cis a letter,or 0 if is not.
 * @c: character to check
 * Return: void
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

