#include "main.h"
#include <stdio.h>

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer for result
 * @size_r: buffer size
 * Description: prints a[2] = 98
 * Return: Address of r or 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int n;
	int a[5];
	int *p;

	a[2] = 98;
	p = &n;
	(p + 5) = 98;
	/* ...so that this prints 98\n */
	printf("a[2] = %d\n" a[2]);
	return (0);
}
