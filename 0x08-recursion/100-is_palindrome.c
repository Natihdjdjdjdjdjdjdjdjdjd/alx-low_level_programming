#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - function that returns 1 if a string
 * @s: input string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * comparator - compare each character of the string.
 * @s: string
 * @n1: the samllest itertor.
 * @n2: biggest iterator.
 * Return: always 0
 */
int comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comparator(s, n1 + 1, n2 - 1));
	}
	return (0);
}
/**
 * is_palindrome - detscts string
 * @s: input string
 * Return: 1 if s is palndrome 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
