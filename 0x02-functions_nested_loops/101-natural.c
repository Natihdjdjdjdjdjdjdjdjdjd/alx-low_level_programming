#include <stdio.h>

/**
 * main - the sum of the multiple of 3 or 5 until 1024
 * Return: always 0
 */
int main(void)
{
	int x, y = 0;

	while (x <= 1023)
	{
		if ((x % 5 == 0) || (x % 3 == 0))
		{
			y += x;
		}
		x++;
	}
	printf("%d\n", y);

	return (0);

}
