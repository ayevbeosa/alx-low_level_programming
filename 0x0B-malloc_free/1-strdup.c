#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function returns a pointer to a newly
 * allocated space in memory.
 * @str: string.
 * Return: pointer of new string or null
 */

char *_strdup(char *str)
{
	char *new_str;
	int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	new_str = (char *)malloc(sizeof(char) * (i + 1));

	if (new_str == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		new_str[j] = str[j];

	return (new_str);
}
