#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: the age of the dog
 * @owner: the name of the owner
 * Return: dog_t if success otherwise NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = (char *) malloc(sizeof(char) * (strlen(name) + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}


	dog->owner = (char *) malloc(sizeof(char) * (strlen(owner) + 1));
	if (dog->owner)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = strcpy(dog->name, name);
	dog->age = age;
	dog->owner = strcpy(dog->owner, owner);
	return (dog);
}
