#include "main.h"
#include <stdio.h>

void print_arr(int *a, int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
}

int main(void)
{
	int arr1[] = {1, 2, 3, 4, 5};
	int arr2[] = {10, 20, 30, 40};
	int arr3[] = {100};
	int arr4[] = {5, 4, 3, 2, 1};
	int arr5[] = {-5, 10, -3, 0, 7};
	
	printf("Test 1: {1, 2, 3, 4, 5}\n");
	printf("Before: ");
	print_arr(arr1, 5);
	reverse_array(arr1, 5);
	printf("After:  ");
	print_arr(arr1, 5);
	printf("\n");
	
	printf("Test 2: {10, 20, 30, 40} (even number of elements)\n");
	printf("Before: ");
	print_arr(arr2, 4);
	reverse_array(arr2, 4);
	printf("After:  ");
	print_arr(arr2, 4);
	printf("\n");
	
	printf("Test 3: {100} (single element)\n");
	printf("Before: ");
	print_arr(arr3, 1);
	reverse_array(arr3, 1);
	printf("After:  ");
	print_arr(arr3, 1);
	printf("\n");
	
	printf("Test 4: {5, 4, 3, 2, 1} (already reversed)\n");
	printf("Before: ");
	print_arr(arr4, 5);
	reverse_array(arr4, 5);
	printf("After:  ");
	print_arr(arr4, 5);
	printf("\n");
	
	printf("Test 5: {-5, 10, -3, 0, 7} (with negative numbers)\n");
	printf("Before: ");
	print_arr(arr5, 5);
	reverse_array(arr5, 5);
	printf("After:  ");
	print_arr(arr5, 5);
	printf("\n");
	
	/* Test 6: Empty array (n = 0) */
	printf("Test 6: Empty array (n=0)\n");
	int arr6[] = {1, 2, 3};
	printf("Before: ");
	print_arr(arr6, 3);
	reverse_array(arr6, 0);
	printf("After:  ");
	print_arr(arr6, 3);
	
	return (0);
}
