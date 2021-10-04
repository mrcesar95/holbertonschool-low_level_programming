#include "main.h"
/**
 * print_alphabet - alphabet
 *
 * Description: Prints the alphabet with _putchar
 *
 * Return: void
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z' ; alpha++)
	{
	_putchar(alpha);
	}
	_putchar('\n');
}
