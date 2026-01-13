#include "lists.h"
#include <stdio.h>

int main(void)
{
    list_t *head = NULL;
    
    printf("=== Testing add_node ===\n");
    add_node(&head, "World");
    add_node(&head, "Hello");
    print_list(head);
    printf("Length: %lu\n\n", list_len(&head));
    
    printf("=== Testing add_node_end ===\n");
    add_node_end(&head, "!");
    print_list(head);
    printf("Length: %lu\n\n", list_len(&head));
    
    printf("=== Testing free_list ===\n");
    free_list(head);
    printf("List freed successfully\n");
    
    return 0;
}
