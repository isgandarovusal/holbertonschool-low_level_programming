#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *s1, *s2, *s3;

    /* Test 1: Normal string */
    s1 = _strdup("Hello World");
    printf("Test 1: %s\n", s1);
    free(s1);

    /* Test 2: Empty string */
    s2 = _strdup("");
    printf("Test 2: '%s' (empty string)\n", s2);
    free(s2);

    /* Test 3: NULL pointer */
    s3 = _strdup(NULL);
    if (s3 == NULL)
        printf("Test 3: NULL returned as expected\n");

    return (0);
}
