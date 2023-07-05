#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
 * is_prime_number -  function that returns 1 if the input integer
 * is a prime number, otherwise return 0
 * @n: input number
 * Return: int value 1 for  prime 0 for composite
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - check the number of prime
 * is a prime number, otherwise return 0
 * @n: input number
 * @i: iteration
 * Return: int value 1 for  prime 0 for composite
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);

	return (check_prime(n, i + 1));
}
