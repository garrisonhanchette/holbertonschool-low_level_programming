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
		printf("Size of char: %lu bytes\n", sizeof(e));
		printf("Size of int: %lu bytes\n", sizeof(a));
		printf("Size of long int: %lu bytes\n", sizeof(c));
		printf("Size of long long int: %lu byte\n", sizeof(d));
		printf("Size of float: %lu byte\n", sizeof(b));		
	return (0);
}
