# ifndef _DOG_H_
# define  _DOG_H_

/**
 * struct dog - Dog Data
 * @name: first member name
 * @age: second member age
 * @owner: third member owner
 */

typedef struct dog
{
	 char *name;
	 double age;
	 char *owner;
} my_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
