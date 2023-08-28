# More Singly Linked Lists

This repository contains C programs that demonstrate various operations on singly linked lists. Each program focuses on a specific operation and provides examples to showcase its functionality.

## Programs and Tasks

1. **Print List**
   - File: `0-print_listint.c`
   - Function: `size_t print_listint(const listint_t *h)`
   - Description: This function prints all the elements of a `listint_t` linked list and returns the number of nodes.
   - Example:
     ```c
     listint_t *head = NULL;
     /* ... Adding elements to the list ... */
     size_t num_nodes = print_listint(head);
     printf("-> %lu elements\n", num_nodes);
     ```

2. **List Length**
   - File: `1-listint_len.c`
   - Function: `size_t listint_len(const listint_t *h)`
   - Description: This function returns the number of elements in a `listint_t` linked list.
   - Example:
     ```c
     listint_t *head = NULL;
     /* ... Adding elements to the list ... */
     size_t num_elements = listint_len(head);
     printf("-> %lu elements\n", num_elements);
     ```

3. **Add Node**
   - File: `2-add_nodeint.c`
   - Function: `listint_t *add_nodeint(listint_t **head, const int n)`
   - Description: This function adds a new node with value `n` at the beginning of a `listint_t` linked list and returns the address of the new element.
   - Example:
     ```c
     listint_t *head = NULL;
     add_nodeint(&head, 5);
     ```

4. **Add Node at the End**
   - File: `3-add_nodeint_end.c`
   - Function: `listint_t *add_nodeint_end(listint_t **head, const int n)`
   - Description: This function adds a new node with value `n` at the end of a `listint_t` linked list and returns the address of the new element.
   - Example:
     ```c
     listint_t *head = NULL;
     add_nodeint_end(&head, 8);
     ```

5. **Free List**
   - File: `4-free_listint.c`
   - Function: `void free_listint(listint_t *head)`
   - Description: This function frees a `listint_t` linked list, deallocating memory for each node.

6. **Free List (Set Head to NULL)**
   - File: `5-free_listint2.c`
   - Function: `void free_listint2(listint_t **head)`
   - Description: This function frees a `listint_t` linked list and sets the head pointer to NULL.

7. **Delete Head Node (Pop)**
   - File: `6-pop_listint.c`
   - Function: `int pop_listint(listint_t **head)`
   - Description: This function deletes the head node of a `listint_t` linked list and returns the data of the deleted node.

8. **Get Node at Index**
   - File: `7-get_nodeint.c`
   - Function: `listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)`
   - Description: This function returns the node at the specified index in a `listint_t` linked list.

9. **Sum List Elements**
   - File: `8-sum_listint.c`
   - Function: `int sum_listint(listint_t *head)`
   - Description: This function calculates the sum of all elements in a `listint_t` linked list.

10. **Insert Node at Index**
    - File: `9-insert_nodeint.c`
    - Function: `listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)`
    - Description: This function inserts a new node with value `n` at the specified index in a `listint_t` linked list.

11. **Delete Node at Index**
    - File: `10-delete_nodeint.c`
    - Function: `int delete_nodeint_at_index(listint_t **head, unsigned int index)`
    - Description: This function deletes the node at the specified index in a `listint_t` linked list.

## Usage

To compile and run the programs, follow these steps:

1. Clone the repository: `git clone <repository_url>`
2. Navigate to the appropriate directory: `cd <repository_directory>`
3. Compile the C files: `gcc -Wall -Werror -pedantic -Wextra -std=gnu89 <source_files> -o <output_file>`
4. Run the compiled program: `./<output_file>`

Replace `<repository_url>`, `<repository_directory>`, `<source_files>`, and `<output_file>` with the appropriate values.

## Repository Details

- GitHub Repository: alx-low_level_programming
- Directory: 0x13-more_singly_linked_lists
- Author: EmmanuelOnyekachi
- Email: emmanuelonyekachi04122000@gmail.com
