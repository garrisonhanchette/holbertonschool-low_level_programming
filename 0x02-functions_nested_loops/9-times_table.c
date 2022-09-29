#include "main.h"

/** 
 * times_table - prints 9 times table
 *
 * variable n1 first operator
 * variable n2 second operator
 * p is product
 *
 * Return: void
 */
void times_table(void)
{
	int n1;
	int n2;
	int p;

	for (n1 = 0; n1 <= 9; n1++)
	{
		for (n2 = 0; n2 <= 9; n2++)
		{
			p = n1 * n2;
			if (n2 == 0)
			{
				_putchar('0');													}
			else
			{																if ((p / 10) == 0)
				{
					_putchar(' ');
					_putchar((p % 10) + '0');
				}
				else
				{
					_putchar((p / 10) + '0');
					_putchar((p % 10) + '0');
				}
			}
			if (n2 < 9)
			{
			_putchar(',');
			_putchar(' ');
			}
			if (n2 == 9)
			{
				_putchar('\n');
			}														}
	}
}	
