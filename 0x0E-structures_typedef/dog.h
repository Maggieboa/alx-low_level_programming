#ifndef MAIN_H
#define MAIN_H
/**
 *struct dog-struct for defined data
 *@name:placeholder for the name
 *@age:placeholder for age
 *@owner:placeholder for the owner
 **/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
