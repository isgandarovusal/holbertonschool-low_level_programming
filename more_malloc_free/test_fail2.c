#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("Testing malloc_checked with huge size...\n");
    
    /* Bu çox böyük ölçüdür, malloc fail olmalıdır */
    void *ptr = malloc_checked((unsigned int)-1);
    
    /* Əgər bura çatıbsa, malloc_checked səhv işləyir */
    printf("ERROR: Should have exited with 98\n");
    free(ptr);
    return (1);
}
