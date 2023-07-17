#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog's structure
 * @name: name's initializing
 * @age: age's initializing
 * @owner: owner's initializing
 *
 * Description: struct
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
