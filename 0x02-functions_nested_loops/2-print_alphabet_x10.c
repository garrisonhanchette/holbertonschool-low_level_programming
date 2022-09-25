#include "main.h"

/**
 * main - prints alphabet ten times
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int x;
	for (x = 0; x < 10; x++)
	{
		int i;
		for (i = 97; i <=122; i++)
			_putchar(i);
		_putchar('\n');
	}
}
