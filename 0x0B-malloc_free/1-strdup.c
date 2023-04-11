#include <stdlib.h>
#include "main.h"
/**
 * _strdup - function that returns a pointer to new allocated memory
 *
 * @str: the string
 *
 *Return: A pointer


 */


char *_strdup(char *str)
{
	int i, r;
	char *p;

	if (str == NULL)
		return (NULL);

	i = 0;

	while (str[i] != '\0')
		i++;

	p = (char *) malloc(sizeof(char) * (i + 1));


	if (p == NULL)
		return (NULL);

	for (r = 0; str[r] ; r++)
		p[r] = str[r];



	return (p);
}
