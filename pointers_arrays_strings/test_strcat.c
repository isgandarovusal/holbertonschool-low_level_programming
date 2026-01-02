#include "main.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
	char dest1[50] = "Hello";
	char dest2[50] = "";
	char dest3[50] = "Test ";
	char src1[] = " World!";
	char src2[] = "Empty";
	char src3[] = "String";
	char *result;
	
	/* Test 1: Normal concatenation */
	printf("Test 1:\n");
	printf("Before: '%s' + '%s'\n", dest1, src1);
	result = _strcat(dest1, src1);
	printf("After: '%s'\n", dest1);
	printf("Return: '%s'\n\n", result);
	
	/* Test 2: Empty destination */
	printf("Test 2:\n");
	printf("Before: '%s' + '%s'\n", dest2, src2);
	result = _strcat(dest2, src2);
	printf("After: '%s'\n", dest2);
	printf("Return: '%s'\n\n", result);
	
	/* Test 3: Multiple concatenations */
	printf("Test 3:\n");
	printf("Start: '%s'\n", dest3);
	_strcat(dest3, "One");
	_strcat(dest3, " Two");
	_strcat(dest3, " Three");
	printf("Final: '%s'\n\n", dest3);
	
	/* Test 4: Check null terminator */
	char test[20] = "Hello";
	_strcat(test, "There");
	printf("Test 4 (check length): %lu\n", strlen(test));
	
	return (0);
}
