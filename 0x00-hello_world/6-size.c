#include<stdio.h>
/**
 * main -Entry Point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;
	float b;
	long int c;
	long long int d;
	char e;
		printf("Size of a char: %lu bytes\n", sizeof(e));
		printf("Size of an int: %lu bytes\n", sizeof(a));
		printf("Size of a long int: %lu bytes\n", sizeof(c));
		printf("Size of a long long int: %lu byte\n", sizeof(d));
		printf("Size of a float: %lu byte\n", sizeof(b));		
	return (0);
}
