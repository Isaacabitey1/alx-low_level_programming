#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *dupli;
	unsigned int s, len;

	s = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	dupli = malloc(sizeof(char) * (len + 1));

	if (dupli == NULL)
		return (NULL);

	while ((dupli[s] = str[s]) != '\0')
		s++;

	return (dupli);
}
