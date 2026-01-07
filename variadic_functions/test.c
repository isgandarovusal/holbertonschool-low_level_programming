#include <stdio.h>
#include "variadic_functions.h"

int main(void)
{
    int sum;
    
    sum = sum_them_all(2, 98, 1024);
    printf("Sum 1: %d\n", sum);
    
    sum = sum_them_all(4, 98, 1024, 402, -1024);
    printf("Sum 2: %d\n", sum);
    
    sum = sum_them_all(0);
    printf("Sum 3: %d\n", sum);
    
    return 0;
}
