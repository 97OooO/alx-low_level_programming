#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a struct to represent a dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the owner of the dog
 *
 * Description: This struct stores information about a dog, including its name,
 *              age, and owner's name.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
