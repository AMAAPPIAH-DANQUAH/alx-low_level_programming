#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (successful)
 * Description: double combination
*/

int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar (i + '0');
			putchar (j + '0');

			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
