#include "sort.h"

void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t j;

	int aux;
	int count = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; i < size; i++)
		{
			if (array[j] < array[j -1])
			{
				aux = array[j];
				array[j] = array[j -1];
				array[j -1] = aux;
				print_array(array, size);
				count ++;
			}
		}
	}
}

