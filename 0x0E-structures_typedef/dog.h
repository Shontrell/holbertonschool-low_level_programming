#ifndef DOG_H
#define DOG_H
/**
 * struct dog - name, owner, and age
 * @name: dog's name
 * @owner: dog's owner
 * @age: dog's age
 * Description: dog's details from name, owner, and age
 */
typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
