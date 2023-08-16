#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * struct dog - Dog attributes
 * @name: Dog's name
 * @age: Dog's age
 * @owner: The Dog's owner
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
