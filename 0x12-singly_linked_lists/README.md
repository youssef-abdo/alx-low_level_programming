This directory contains a C project related to singly linked lists. It includes a header file "lists.h" defining a struct named "list_s," along with various function prototypes for manipulating linked lists. The tasks in the project are described as follows:

1. Task 0: Print list
   - File: "0-print_list.c"
   - Function: `size_t print_list(const list_t *h);`
   - Description: This function prints all the elements of a "list_t" linked list. If the "str" member of a node is NULL, it prints "[0] (nil)".

2. Task 1: List length
   - File: "1-list_len.c"
   - Function: `size_t list_len(const list_t *h);`
   - Description: This function returns the number of elements in a "list_t" linked list.

3. Task 2: Add node
   - File: "2-add_node.c"
   - Function: `list_t *add_node(list_t **head, const char *str);`
   - Description: This function adds a new node at the beginning of a "list_t" linked list. If the function fails, it returns NULL. Otherwise, it returns the address of the new element.

4. Task 3: Add node at the end
   - File: "3-add_node_end.c"
   - Function: `list_t *add_node_end(list_t **head, const char *str);`
   - Description: This function adds a new node at the end of a "list_t" linked list. If the function fails, it returns NULL. Otherwise, it returns the address of the new element.

5. Task 4: Free list
   - File: "4-free_list.c"
   - Function: `void free_list(list_t *head);`
   - Description: This function frees the memory allocated to a "list_t" linked list.

6. Task 5: The Hare and the Tortoise
   - File: "100-first.c"
   - Function: (Not specified)
   - Description: This is a C function that prints the message "You're beat! and yet, you must allow,\nI bore my house upon my back!" before the main function is executed.

7. Task 6: Real programmers can write assembly code in any language
   - File: "101-hello_holberton.asm"
   - Function: (Not specified)
   - Description: This is a 64-bit assembly program that prints "Hello, Holberton" followed by a new line using only the printf function without interrupts.

The project seems to be organized around implementing basic operations on singly linked lists and includes tasks that test different functionalities.
