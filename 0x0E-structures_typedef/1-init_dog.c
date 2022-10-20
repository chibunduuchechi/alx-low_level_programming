#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - main entry point
 * Description: Initializes a variable of type struct dog
 * @name: The name of the dog
 * @d: The dog to be initialized
 * @age: The age of the dog
 * @owner: The owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
