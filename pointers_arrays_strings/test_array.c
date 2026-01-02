#include "main.h"

int main(void)
{
	int arr1[] = {1, 2, 3, 4, 5};
	int arr2[] = {10};
	int arr3[] = {-5, 0, 5};
	int arr4[] = {100, 200, 300, 400, 500, 600, 700};
	
	printf("Test 1: ");
	print_array(arr1, 5);
	
	printf("Test 2 (single element): ");
	print_array(arr2, 1);
	
	printf("Test 3 (with zero): ");
	print_array(arr3, 3);
	
	printf("Test 4 (7 elements): ");
	print_array(arr4, 7);
	
	printf("Test 5 (print first 3 of 5): ");
	print_array(arr1, 3);
	
	printf("Test 6 (n = 0): ");
	print_array(arr1, 0);
	
	return (0);
}
