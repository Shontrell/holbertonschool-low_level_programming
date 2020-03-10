#include "dog.h"
#include <stdlib.h>
/**
 * *new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *ND;
	int n = 0, o = 0, count;

	if (name == NULL)
		return (NULL);
	if (owner == NULL)
		return (NULL);
	for (; name[n] != '\0'; n++)
		;
	for (; owner[o] != '\0'; o++)
		;
	ND = malloc(sizeof(struct dog));
	if (ND == NULL)
	{
		free(ND);
		return (NULL);
	}
	ND->name = malloc(n + 1);
	if (ND->name == NULL)
	{
		free(ND->name);
		free(ND);
		return (NULL);
	}
	ND->age = age;
	ND->owner = malloc(o + 1);
	if (ND->owner == NULL)
	{
		free(ND->owner);
		free(ND->name);
		free(ND);
		return (NULL);
	}
	for (count = 0; count <= n; count++)
		ND->name[count] = name[count];
	for (count = 0; count <= o; count++)
		ND->owner[count] = owner[count];
	return (ND);
}
