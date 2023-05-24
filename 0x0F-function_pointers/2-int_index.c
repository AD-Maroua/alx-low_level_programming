#include "function_pointers.h"

/**
 * int_index - searches for integer
 * @array: the int array
 * @size: yhe array size
 * @cmp: the compare function
 * Return: 0
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);
}
