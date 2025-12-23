#include "main.h"
#include <stdio.h>

int main(void)
{
    /* Bu çox böyük bir ölçüdür, malloc fail olmalıdır */
    malloc_checked((unsigned int)-1);
    
    /* Əgər bura çatıbsa, deməli malloc_checked səhv işləyir */
    printf("Error: Should have exited with 98\n");
    return (1);
}
