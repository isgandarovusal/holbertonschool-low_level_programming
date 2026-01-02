#include "main.h"
#include <stdio.h>

int main(void)
{
	char str1[] = "Hello";
	char str2[] = "";
	char str3[] = "A";
	char str4[] = "12345";
	char str5[] = "racecar";
	char str6[] = "Test string";
	
	printf("Original strings:\n");
	printf("1. '%s'\n", str1);
	printf("2. '%s' (empty)\n", str2);
	printf("3. '%s'\n", str3);
	printf("4. '%s'\n", str4);
	printf("5. '%s'\n", str5);
	printf("6. '%s'\n", str6);
	
	rev_string(str1);
	rev_string(str2);
	rev_string(str3);
	rev_string(str4);
	rev_string(str5);
	rev_string(str6);
	
	printf("\nReversed strings:\n");
	printf("1. '%s'\n", str1);
	printf("2. '%s' (empty)\n", str2);
	printf("3. '%s'\n", str3);
	printf("4. '%s'\n", str4);
	printf("5. '%s' (palindrome)\n", str5);
	printf("6. '%s'\n", str6);
	
	return (0);
}
