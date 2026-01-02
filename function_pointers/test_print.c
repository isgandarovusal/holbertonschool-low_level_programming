#include <stdio.h>
#include "function_pointers.h"

void print_lowercase(char *name)
{
	printf("Lowercase: ");
	for (int i = 0; name[i]; i++)
	{
		if (name[i] >= 'A' && name[i] <= 'Z')
			putchar(name[i] + 'a' - 'A');
		else
			putchar(name[i]);
	}
	printf("\n");
}

void print_with_asterisks(char *name)
{
	printf("*** %s ***\n", name);
}

int main(void)
{
	/* Test 1: Normal function */
	print_name("Alice", print_name_as_is);
	
	/* Test 2: Different function */
	print_name("BOB", print_lowercase);
	
	/* Test 3: Another function */
	print_name("Charlie", print_with_asterisks);
	
	/* Test 4: NULL name */
	print_name(NULL, print_name_as_is);
	printf("(Should print nothing for NULL name)\n");
	
	/* Test 5: NULL function */
	print_name("David", NULL);
	printf("(Should print nothing for NULL function)\n");
	
	return (0);
}
