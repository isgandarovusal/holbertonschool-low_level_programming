#include "main.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
	char dest1[20];
	char dest2[20];
	char dest3[20];
	char dest4[10];
	char *result;
	int i;
	
	/* Test 1: n less than src length */
	printf("Test 1: n=5, src='Hello World'\n");
	result = _strncpy(dest1, "Hello World", 5);
	dest1[5] = '\0';  /* Manually null terminate for printing */
	printf("Result: '%s'\n", dest1);
	printf("Full buffer (first 10 chars): ");
	for (i = 0; i < 10; i++)
		printf("%c", dest1[i] ? dest1[i] : '\\0');
	printf("\n\n");
	
	/* Test 2: n greater than src length */
	printf("Test 2: n=15, src='Short'\n");
	result = _strncpy(dest2, "Short", 15);
	printf("Result: '%s'\n", dest2);
	printf("Character at index 10: 0x%02x\n", dest2[10]);
	printf("\n");
	
	/* Test 3: n equals src length */
	printf("Test 3: n=11, src='Hello World'\n");
	result = _strncpy(dest3, "Hello World", 11);
	printf("Result: '%s'\n", dest3);
	printf("\n");
	
	/* Test 4: n = 0 */
	printf("Test 4: n=0, src='Test'\n");
	dest4[0] = 'X';
	result = _strncpy(dest4, "Test", 0);
	printf("First char remains: '%c'\n", dest4[0]);
	printf("\n");
	
	/* Test 5: Empty src */
	printf("Test 5: n=10, src=''\n");
	char dest5[10] = "XXXXXXXXX";
	result = _strncpy(dest5, "", 10);
	printf("Buffer after copy (hex): ");
	for (i = 0; i < 10; i++)
		printf("0x%02x ", dest5[i]);
	printf("\n");
	
	return (0);
}
