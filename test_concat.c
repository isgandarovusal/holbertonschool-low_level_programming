#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *s1, *s2, *s3, *s4;

    /* Test 1: Normal case */
    s1 = str_concat("Hello ", "World");
    printf("Test 1: %s\n", s1);
    free(s1);

    /* Test 2: First string NULL */
    s2 = str_concat(NULL, "World");
    printf("Test 2: %s\n", s2);
    free(s2);

    /* Test 3: Second string NULL */
    s3 = str_concat("Hello ", NULL);
    printf("Test 3: %s\n", s3);
    free(s3);

    /* Test 4: Both NULL */
    s4 = str_concat(NULL, NULL);
    printf("Test 4: '%s'\n", s4);
    free(s4);

    return (0);
}
