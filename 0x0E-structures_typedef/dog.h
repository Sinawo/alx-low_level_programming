#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - Short description
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
	/**
	 * @c: This is longer description of C
	 *
	 * Description: You can use paragraphs to describe arguments
	 * using this method.
	 */
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
