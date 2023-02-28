#include "main.h"
/**
 * _print_rev_recursion - print a string in rev
 * @s: the string printed
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
