#include <stdlib.h>
#include <time.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
		srand(time(0));
		n = rand() - RAND_MAX / 2;
			if (n > 0.0)
				printf("is positive")
			else if (n < 0.0)
				printf("is negative")
			else
				printf("is zero")
	return (0);
}
