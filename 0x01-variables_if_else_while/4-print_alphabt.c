#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
char x;
	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'q' && x != 'e')
			{
				putchar(x);
			}
		{
		putchar('\n');
		}
	}
return (0);
}
