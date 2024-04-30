#include <stdio.h>
#include "dog.h"

/* Function to calculate the length of a string. */
/**
 * my_strlen - Entry point.
 * @str: String whose length is to be gotten.
 *
 * Description: Function to calucalate the length of a string.
 * Return: Length of the string.
 */

int my_strlen(const char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}

/**
 * my_strcpy - Entry point.
 *
 * @dest: Destination
 * @src: Source of text to be copied.
 *
 * Description: Function to copy text from source to destination.
 * Return: Nothing.
 */
void my_strcpy(char *dest, const char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

/**
 * new_dog - Entry point
 *
 * @name: Name of new dog.
 * @age: Age of the new dog.
 * @owner: Owner of the new dog.
 *
 * Description: Allocates memory for a new dog structure, copies
 * and initializes the age.
 *
 * Return: Returns a pointer to the newly created dog.  Returns NULL
 * if memory allocation fails.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = malloc(sizeof(dog_t));

	if (newDog == NULL)
		return (NULL);

	/* Allocate memory for the name string and copy the input string */
	newDog->name = malloc(my_strlen(name) + 1);
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}
	my_strcpy(newDog->name, name);

	/* Allocate memory for the owner string and copy the input string. */
	newDog->owner = malloc(my_strlen(owner) + 1);
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	my_strcpy(newDog->owner, owner);

	/* Set the age of the dog */
	newDog->age = age;

	return (newDog);
}
