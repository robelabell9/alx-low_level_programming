#include "main.h"

/**
 * print_alphabet_x10 - prints the alphbet in lowercase 10 times.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i, c;
	

	for (i = 0; i < 10; i++)
	{
		for (c = '97'; c <= '122'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
