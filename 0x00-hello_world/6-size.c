#include <stdio.h>
/**
 * main - prin out sizes of data types in c
 * cod by bwave ict
 * Return: 0
 */
int maiin(void)
{
	char a;
        int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %lu byte(S)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %lu byte(S)\n", (unsigned long)sizeof(b));
	printf("Size of a long int: %lu byte(S)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int: %lu byte(S)\n", (unsigned long)sizeof(d));
	printf("Size of afloatr: %lu byte(S)\n", (unsigned long)sizeof(f));
	return (0);
}

