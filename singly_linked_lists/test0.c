#include "lists.h"
#include <stdlib.h>
#include <string.h>

int main(void)
{
    list_t *head = malloc(sizeof(list_t));
    head->str = strdup("Hello");
    head->len = 5;
    head->next = malloc(sizeof(list_t));
    head->next->str = strdup("World");
    head->next->len = 5;
    head->next->next = NULL;
    
    print_list(head);
    
    free(head->str);
    free(head->next->str);
    free(head->next);
    free(head);
    return (0);
}
