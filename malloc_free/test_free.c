#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int **grid1, **grid2;

	/* Test 1: Normal grid */
	printf("Test 1: Freeing 3x4 grid\n");
	grid1 = alloc_grid(3, 4);
	if (grid1 != NULL)
	{
		printf("Grid created successfully\n");
		free_grid(grid1, 4);
		printf("Grid freed successfully\n");
	}

	/* Test 2: NULL grid */
	printf("\nTest 2: Freeing NULL grid\n");
	free_grid(NULL, 5);
	printf("No crash with NULL grid\n");

	/* Test 3: Single row grid */
	printf("\nTest 3: Freeing 5x1 grid\n");
	grid2 = alloc_grid(5, 1);
	if (grid2 != NULL)
	{
		printf("Single row grid created\n");
		free_grid(grid2, 1);
		printf("Single row grid freed\n");
	}

	return (0);
}
