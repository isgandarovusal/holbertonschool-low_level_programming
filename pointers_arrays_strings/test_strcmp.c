#include "main.h"
#include <stdio.h>

int main(void)
{
	printf("Test 1: 'apple' vs 'banana' = %d\n", _strcmp("apple", "banana"));
	printf("Test 2: 'banana' vs 'apple' = %d\n", _strcmp("banana", "apple"));
	printf("Test 3: 'hello' vs 'hello' = %d\n", _strcmp("hello", "hello"));
	printf("Test 4: 'hello' vs 'hell' = %d\n", _strcmp("hello", "hell"));
	printf("Test 5: 'hell' vs 'hello' = %d\n", _strcmp("hell", "hello"));
	printf("Test 6: 'a' vs 'b' = %d\n", _strcmp("a", "b"));
	printf("Test 7: 'b' vs 'a' = %d\n", _strcmp("b", "a"));
	printf("Test 8: '' vs '' = %d\n", _strcmp("", ""));
	printf("Test 9: 'abc' vs 'abc' = %d\n", _strcmp("abc", "abc"));
	printf("Test 10: 'ABC' vs 'abc' = %d\n", _strcmp("ABC", "abc"));
	printf("Test 11: '123' vs '124' = %d\n", _strcmp("123", "124"));
	
	/* Edge cases */
	printf("\nEdge cases:\n");
	printf("'\\0' vs 'a': %d\n", _strcmp("", "a"));
	printf("'a' vs '\\0': %d\n", _strcmp("a", ""));
	
	return (0);
}
