#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Represents a dog with its name, age, and owner.
 * @name: Name of the dog (string).
 * @age: Age of the dog (float).
 * @owner: Owner of the dog (string).
 */
struct dog
{
char *name;
float age;
char *owner;
};
typedef struct dog dog_t;
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
