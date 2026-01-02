#include "main.h"
#include <stdio.h>

int main(void)
{
	int x = 10, y = 20;
	int p = -5, q = 15;
	int r = 100, s = 200;
	
	printf("Test 1: x=%d, y=%d\n", x, y);
	swap_int(&x, &y);
	printf("After swap: x=%d, y=%d\n", x, y);
	
	printf("\nTest 2: p=%d, q=%d\n", p, q);
	swap_int(&p, &q);
	printf("After swap: p=%d, q=%d\n", p, q);
	
	printf("\nTest 3: r=%d, s=%d\n", r, s);
	swap_int(&r, &s);
	printf("After swap: r=%d, s=%d\n", r, s);
	
	/* Test swapping same values */
	printf("\nTest 4: Same values\n");
	int a = 50, b = 50;
	printf("Before: a=%d, b=%d\n", a, b);
	swap_int(&a, &b);
	printf("After: a=%d, b=%d\n", a, b);
	
	return (0);
}
