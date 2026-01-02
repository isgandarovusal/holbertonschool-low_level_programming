#include "main.h"
#include <stdio.h>

int main(void)
{
	printf("Test 1: %u\n", _strspn("hello", "oleh"));  // 5
	printf("Test 2: %u\n", _strspn("world", "oleh"));  // 0
	printf("Test 3: %u\n", _strspn("abc123", "abc"));  // 3
	printf("Test 4: %u\n", _strspn("", "abc"));        // 0
	printf("Test 5: %u\n", _strspn("abc", ""));        // 0
	
	return (0);
}
