#ifndef DOGSTRUCT
#define DOGSTRUCT

/**
 * struct dog - organized structured data for dogs
 * @name: names
 * @age: ages
 * @owner: owners
 */
struct dog
{
char *name, *owner;
float age;
};

typedef struct dog dog_t;

void free_dog(dog_t *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
