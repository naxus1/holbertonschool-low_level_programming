#include "search_algos.h"

/**

 */

int jump_search(int *array, size_t size, int value)
{
	size_t jumps = 0, i, flag = 0;
	int break_while = 1;

	jumps = sqrt(size);

	while (break_while == 1)
	{
		for (i = flag; i <= size; i )
		{
			if (array[i] == value)
			{
			}

			else if (array[i] > value)
			{
				i--;
			}
		}
	}
}
