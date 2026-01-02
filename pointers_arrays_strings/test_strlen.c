#include "main.h"
#include <stdio.h>

int main(void)
{
	char *str1 = "Hello";
	char *str2 = "";
	char *str3 = "C programming";
	char str4[] = "Array string";
	char str5[] = "A";  /* Single character */
	char str6[] = "Test with spaces";
	
	printf("Test 1: '%s' - Length: %d\n", str1, _strlen(str1));
	printf("Test 2: Empty string - Length: %d\n", _strlen(str2));
	printf("Test 3: '%s' - Length: %d\n", str3, _strlen(str3));
	printf("Test 4: '%s' - Length: %d\n", str4, _strlen(str4));
	printf("Test 5: '%s' - Length: %d\n", str5, _strlen(str5));
	printf("Test 6: '%s' - Length: %d\n", str6, _strlen(str6));
	
	/* Test with NULL pointer (edge case) */
	/* printf("Test NULL: %d\n", _strlen(NULL)); */ /* This would crash */
	
	return (0);
}
