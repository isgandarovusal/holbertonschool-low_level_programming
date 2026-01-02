#include "main.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
	char dest1[50] = "Hello";
	char dest2[50] = "Test";
	char dest3[50] = "";
	char src[] = "World!";
	char *result;
	
	/* Test 1: n less than src length */
	printf("Test 1 (n=3):\n");
	strcpy(dest1, "Hello");
	printf("Before: '%s'\n", dest1);
	result = _strncat(dest1, src, 3);
	printf("After: '%s'\n", dest1);
	printf("Expected: 'HelloWor'\n\n");
	
	/* Test 2: n greater than src length */
	printf("Test 2 (n=10 > src length):\n");
	strcpy(dest2, "Test");
	printf("Before: '%s'\n", dest2);
	result = _strncat(dest2, src, 10);
	printf("After: '%s'\n", dest2);
	printf("Expected: 'TestWorld!'\n\n");
	
	/* Test 3: n = 0 */
	printf("Test 3 (n=0):\n");
	strcpy(dest3, "Empty");
	printf("Before: '%s'\n", dest3);
	result = _strncat(dest3, src, 0);
	printf("After: '%s'\n", dest3);
	printf("Expected: 'Empty'\n\n");
	
	/* Test 4: n exactly src length */
	printf("Test 4 (n=6):\n");
	char dest4[50] = "Prefix";
	printf("Before: '%s'\n", dest4);
	result = _strncat(dest4, src, 6);
	printf("After: '%s'\n", dest4);
	printf("Expected: 'PrefixWorld!'\n\n");
	
	/* Test 5: Empty src */
	printf("Test 5 (empty src, n=5):\n");
	char dest5[50] = "Hello";
	char empty[] = "";
	printf("Before: '%s'\n", dest5);
	result = _strncat(dest5, empty, 5);
	printf("After: '%s'\n", dest5);
	printf("Expected: 'Hello'\n");
	
	return (0);
}
