#ifndef DOG_H_
#define DOG_H_
/**
 * struct dog - dog's structure
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner name
 *
 * Description: Defines the data about the dog its struct
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
