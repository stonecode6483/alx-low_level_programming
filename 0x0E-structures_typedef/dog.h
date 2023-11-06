#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a dog basic information
 * @name: name of the dog
 * @age: age iof the dog
 * @owner: owner of the dog
 */
struct dog
{
	char *owner;
	char *name;
	float age;

};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

