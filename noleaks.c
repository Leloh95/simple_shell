#include"Shell.h"

/**
 *free_memory - frees memory of array p
 *@p: pointer to pointer of array
 *Return: 0
 */
void free_memory(char **p)
{
int count = 0;

while (p[count])

free( p[count++]);

free(p);
}

