#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main -  program that prints all single digit numbers of base.
 * Return: always 0 (success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)

             putchar((num % 10) + '0');

        putchar('\n');

	return (0);
}
