#include <stdlib.h>
#include "dog.h"
/**
 * init_dog -  function that initialize a variable of type struct dog
 * @d: pointer to d
 * @name: name that will intiLISE
 * @age: age tha intialse
 * @owner: owner toto intialise
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
