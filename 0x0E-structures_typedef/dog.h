#ifndef MAIN_H
#define MAIN_H
/**
 * struct dog - contian char*, float
 * @name: name dog
 * @age: age of dog
 * @owner: the owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct god dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif
