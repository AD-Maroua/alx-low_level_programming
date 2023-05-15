#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *n;

	if (str == NULL)
		return (NULL);

	for (; str[i] != '\0'; size++)
	n = malloc(sizeof(char) * (i + 1));

	if (n == 0)
		return (NULL);

	for (; i < size; i++)
			n[i] = str[i];
	return (n);
}
