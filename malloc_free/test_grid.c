#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void print_grid(int **grid, int width, int height)
{
	int w, h;

	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
			printf("%d ", grid[h][w]);
		printf("\n");
	}
}

int main(void)
{
	int **grid1, **grid2, **grid3;

	/* Test 1: Normal grid */
	printf("Test 1: 3x4 grid\n");
	grid1 = alloc_grid(3, 4);
	if (grid1 != NULL)
	{
		print_grid(grid1, 3, 4);
		/* Free memory */
		for (int i = 0; i < 4; i++)
			free(grid1[i]);
		free(grid1);
	}

	/* Test 2: Invalid dimensions */
	printf("\nTest 2: 0x5 grid (should return NULL)\n");
	grid2 = alloc_grid(0, 5);
	if (grid2 == NULL)
		printf("NULL returned as expected\n");

	/* Test 3: Single row grid */
	printf("\nTest 3: 5x1 grid\n");
	grid3 = alloc_grid(5, 1);
	if (grid3 != NULL)
	{
		print_grid(grid3, 5, 1);
		free(grid3[0]);
		free(grid3);
	}

	return (0);
}
