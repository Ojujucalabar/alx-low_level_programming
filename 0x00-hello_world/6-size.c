#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	printf("Size of a char: %1 byte(s)\n", sizeof(charType));
	printf("Size of an int: %4 byte(s)\n", sizeof(intType));
	printf("Size of a long int: %4 byte(s)\n", sizeof(long intType));
	printf("Size of a long long int: %8 byte(s)\n", sizeof(long long intType));
		printf("Size of a float %4 byte(s)\n", sizeof(floatType));
	return (0);
}
