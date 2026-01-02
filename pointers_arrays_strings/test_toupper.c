#include "main.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[] = "hello world";
	char str2[] = "HELLO WORLD";
	char str3[] = "Hello 123 World!";
	char str4[] = "mixed CASE Test";
	char str5[] = "";
	char str6[] = "onlylowercase";
	char *result;
	
	printf("Test 1: 'hello world'\n");
	printf("Before: %s\n", str1);
	result = string_toupper(str1);
	printf("After:  %s\n", result);
	printf("Return: %s\n\n", result);
	
	printf("Test 2: 'HELLO WORLD' (already uppercase)\n");
	printf("Before: %s\n", str2);
	result = string_toupper(str2);
	printf("After:  %s\n", result);
	printf("\n");
	
	printf("Test 3: 'Hello 123 World!'\n");
	printf("Before: %s\n", str3);
	result = string_toupper(str3);
	printf("After:  %s\n", result);
	printf("\n");
	
	printf("Test 4: 'mixed CASE Test'\n");
	printf("Before: %s\n", str4);
	result = string_toupper(str4);
	printf("After:  %s\n", result);
	printf("\n");
	
	printf("Test 5: Empty string\n");
	printf("Before: '%s'\n", str5);
	result = string_toupper(str5);
	printf("After:  '%s'\n", result);
	printf("\n");
	
	printf("Test 6: 'onlylowercase'\n");
	printf("Before: %s\n", str6);
	result = string_toupper(str6);
	printf("After:  %s\n", result);
	
	/* Verify that only lowercase changed */
	printf("\nCharacter verification:\n");
	char test[] = "aBcDeFgHiJkLmNoPqRsTuVwXyZ";
	printf("Before: %s\n", test);
	string_toupper(test);
	printf("After:  %s\n", test);
	
	return (0);
}
