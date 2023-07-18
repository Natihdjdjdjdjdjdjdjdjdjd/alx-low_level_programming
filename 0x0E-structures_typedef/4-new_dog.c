#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - return the length
 * @s: string to evalute
 * Return: string
 */
int _strlen(char *s)
{
	int i;
	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);

}

/**
 * _srycpy - copy the sring in src
 * @dest: buffer the pointer to copy the string
 * @src: copy the string
 * Return: the to pointer dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);

}

/**
 * new_dog - function that creates a new dog
 * @name: the name of the new dog
 * @age: the age of the new dog
 * @owner: the owner of the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return(NULL);


	doggo->name = malloc(sizeof(char) * (len1 + 1));
	if (doggo->name == NULL)
	{
		free(doggo);
		return(NULL);

	}

	doggo->owner = malloc(sizeof(char) * (len2 + 1));
	if (doggo->owner == NULL)
	{
		free(doggo->name);
		free(doggo);
		return(NULL);

	}
	_strcpy(doggo->name, name);
	doggo->age = age;
	_strcpy(doggo->owner, owner);

	return (doggo);

}
