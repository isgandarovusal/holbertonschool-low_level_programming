#include "main.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	printf("Test 1: '123' = %d\n", _atoi("123"));
	printf("Test 2: '-456' = %d\n", _atoi("-456"));
	printf("Test 3: '   789   ' = %d\n", _atoi("   789   "));
	printf("Test 4: '+100' = %d\n", _atoi("+100"));
	printf("Test 5: '--200' = %d\n", _atoi("--200"));
	printf("Test 6: '+-300' = %d\n", _atoi("+-300"));
	printf("Test 7: '-+400' = %d\n", _atoi("-+400"));
	printf("Test 8: 'abc' = %d\n", _atoi("abc"));
	printf("Test 9: '123abc' = %d\n", _atoi("123abc"));
	printf("Test 10: 'abc456' = %d\n", _atoi("abc456"));
	printf("Test 11: '   -789xyz' = %d\n", _atoi("   -789xyz"));
	printf("Test 12: '' = %d\n", _atoi(""));
	printf("Test 13: '2147483647' (INT_MAX) = %d\n", _atoi("2147483647"));
	printf("Test 14: '-2147483648' (INT_MIN) = %d\n", _atoi("-2147483648"));
	printf("Test 15: '9999999999' (overflow) = %d\n", _atoi("9999999999"));
	printf("Test 16: '-9999999999' (underflow) = %d\n", _atoi("-9999999999"));
	
	return (0);
}
