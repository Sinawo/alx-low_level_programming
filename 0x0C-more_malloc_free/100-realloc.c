#include <stdlib.h>
/**
 * _realloc - reallocates a memory
 * @ptr: array to extend after old_size
 * @old_size: 1st size allocated
 * @new_size: 2nd size to extend the array
 * Return: point of the starting address of old str.
 */
void *_realloc(char *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int x, i; 
	/*int *newBlock = malloc(new_size);*/

/*	if (new_size > old_size)
	{
		for (i = old_size; i < new_size; i++)
		       free(ptr[i]);
*/
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = (char *)malloc((new_size + old_size));
		if (ptr == NULL)
                        return (NULL);
                for (i = old_size, x = 0; x < new_size; i++, x++)
                *(ptr + i) = 0;
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);

}
