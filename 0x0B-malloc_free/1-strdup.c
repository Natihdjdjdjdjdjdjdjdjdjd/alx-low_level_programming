#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - function that returns a pointer to space in memory
 * which contains a copy of the stringa parameter.
 * @str: input string
 * Return: to strign
 */
char *_strdup(char *str)
{
	int i = 0, j = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[j])
	{
		j++;
	}

	s = malloc((sizeof(char) * j) + 1);

	if (s == NULL)
		return (NULL);

	while (i < j)
	{
		s[i] = str[i];
		i++;
	}

	s[i] = '\0';
	return (s);
}
