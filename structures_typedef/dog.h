#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic info
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the owner's name
 *
 * Description: holds the info of one dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
