#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints all possible combination
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 99; i++)
	{
		for (j = 0; j < 99; j++)
		{
			if (j > i)
			{
				putchar(i / 9 + '0');
				putchar(i % 9 + '0');
				putchar(' ');
				putchar(j / 9 + '0');
				putchar(j % 9 + '0');

				if (i * 99 + j != 9888)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
