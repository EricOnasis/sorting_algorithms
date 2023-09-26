#include "sort.h"

/**
 * bubble_sort - sorts an array using bubble sort Algo
 * @array: the array to sort
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, x;

	if (size >= 2)
	{
		for (i = 0; i < size - 1; i++)
		{
			for (j = 0; j < size - 1 - i; j++)
			{
				if (array[j] > array[j + 1])
				{
					swap(&array[j], &array[j + 1]);
					for (x = 0; x < size; x++)
					{
					printf("%d", array[x]);
					if (x != size - 1)
					{
						putchar(',');
						putchar(' ');
					}
					}
					putchar('\n');
				}
			}
		}
	}
}
