#include<stdio.h>
/**
 * main -Entry Point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int integerType;
	float floatType;
	long int longintType;
	long long int longlongintType;
	char charType;
		printf("Size of char: %ld bytes\n",sizeof(charType));
		printf("Size of int: %ld bytes\n",sizeof(intType));
		printf("Size of long int: %ld bytes\n",sizeof(longintType));
		printf("Size of long long int: %ld byte\n",sizeof(longlongintType));
		printf("Size of float: %ld byte\n", sizeof(floatType));
		
		return 0;
}
