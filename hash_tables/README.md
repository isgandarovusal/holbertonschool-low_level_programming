# Hash Tables Project

This project implements a hash table data structure in C. The implementation uses separate chaining for collision resolution.

## Data Structures

### hash_node_t
Represents a node in the hash table:
- `key`: The key (string)
- `value`: The value corresponding to the key
- `next`: Pointer to the next node (for collision resolution via chaining)

### hash_table_t
Represents the hash table:
- `size`: The size of the array
- `array`: Array of pointers to hash_node_t (buckets)

## Functions

### Task 0: hash_table_create
```c
hash_table_t *hash_table_create(unsigned long int size);

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 [files] -o [output]

Author

Your Name
License

This project is part of the Holberton School curriculum.
