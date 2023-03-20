#ifndef dog_h
#define dog_h

/**
 * struct dog - dog
 * @name: param 1
 * @age: param 2
 * @owner: param 3
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/*dog_t *new_dog(char *name, float age, char *owner);*/
void free_dog(dog_t *d);
#endif
