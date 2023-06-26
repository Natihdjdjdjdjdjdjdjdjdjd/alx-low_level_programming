#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - t generates random valid passwords for the program 101-crackme.
 * Return: always 0
 */
int main(void)
{
	int sum;
	int i;

	srand(time(NULL));
	while (sum <= 2645)
	{
		i = rand() % 128;
		sum += i;
		putchar(i);
	}
	putchar(2772 - sum);
	return (0);
}
