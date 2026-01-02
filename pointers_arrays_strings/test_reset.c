#include "main.h"
#include <stdio.h>

int main(void)
{
	int a = 10;
	int b = -5;
	int c = 0;
	
	printf("Before reset:\n");
	printf("a = %d, b = %d, c = %d\n", a, b, c);
	
	reset_to_98(&a);
	reset_to_98(&b);
	reset_to_98(&c);
	
	printf("After reset:\n");
	printf("a = %d, b = %d, c = %d\n", a, b, c);
	
	return (0);
}
