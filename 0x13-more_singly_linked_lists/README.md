## [C - More Singly Linked Lists](0x13-more_singly_linked_lists) Directory :file_folder:

## Tests :heavy_check_mark:

- [test](./test): Directory for the tests.
- [lists.h](./lists.h): Contains function prototypes.

### File and Prototype

- `struct listint_s`
  - `int n`
  - `struct listint_s *next`

- `typedef listint_t`
  - `struct listint_s`

- `0-print_listint.c`
  - `size_t print_listint(const listint_t *h)`

- `1-listint_len.c`
  - `size_t listint_len(const listint_t *h)`

- `2-add_nodeint.c`
  - `listint_t *add_nodeint(listint_t **head, const int n)`

- `3-add_nodeint_end.c`
  - `listint_t *add_nodeint_end(listint_t **head, const int n)`

- `4-free_listint.c`
  - `void free_listint(listint_t *head)`

- `5-free_listint2.c`
  - `void free_listint2(listint_t **head)`

- `6-pop_listint.c`
  - `int pop_listint(listint_t **head)`

- `7-get_nodeint.c`
  - `listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)`

- `8-sum_listint.c`
  - `int sum_listint(listint_t *head)`

- `9-insert_nodeint.c`
  - `listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)`

- `10-delete_nodeint.c`
  - `int delete_nodeint_at_index(listint_t **head, unsigned int index)`

- `100-reverse_listint.c`
  - `listint_t *reverse_listint(listint_t **head)`

- `101-print_listint_safe.c`
  - `size_t print_listint_safe(const listint_t *head)`

- `102-free_listint_safe.c`
  - `size_t free_listint_safe(listint_t **h)`

- `103-find_loop.c`
  - `listint_t *find_listint_loop(listint_t *head)`

## Tasks :page_with_curl:

1. **Print List**
   - [0-print_listint.c](./0-print_listint.c): Prints all elements of a `listint_t` linked list and returns the number of nodes.

2. **List Length**
   - [1-listint_len.c](./1-listint_len.c): Returns the number of elements in a `listint_t` linked list.

3. **Add Node**
   - [2-add_nodeint.c](./2-add_nodeint.c): Adds a new node at the beginning of a `listint_t` linked list and returns its address.

4. **Add Node at the End**
   - [3-add_nodeint_end.c](./3-add_nodeint_end.c): Adds a new node at the end of a `listint_t` linked list and returns its address.

5. **Free List**
   - [4-free_listint.c](./4-free_listint.c): Frees a `listint_t` linked list.

6. **Free**
   - [5-free_listint2.c](./5-free_listint2.c): Frees a `listint_t` linked list and sets the head to `NULL`.

7. **Pop**
   - [6-pop_listint.c](./6-pop_listint.c): Deletes the head node of a `listint_t` linked list and returns its data.

8. **Get Node at Index**
   - [7-get_nodeint.c](./7-get_nodeint.c): Locates a node at a given index of a `listint_t` linked list and returns its address.

9. **Sum List**
   - [8-sum_listint.c](./8-sum_listint.c): Returns the sum of all data in a `listint_t` linked list.

10. **Insert**
    - [9-insert_nodeint.c](./9-insert_nodeint.c): Inserts a new node at a given position in a `listint_t` linked list and returns its address.

11. **Delete at Index**
    - [10-delete_nodeint.c](./10-delete_nodeint.c): Deletes the node at a given index in a `listint_t` linked list and returns `1` if successful or `-1` if failed.

12. **Reverse List**
    - [100-reverse_listint.c](./100-reverse_listint.c): Reverses a `listint_t` linked list using one loop and two variables and returns the first node of the reversed list.

13. **Print (Safe Version)**
    - [101-print_listint_safe.c](./101-print_listint_safe.c): Safely prints a `listint_t` linked list, including lists with loops, and returns the number of nodes.

14. **Free (Safe Version)**
    - [102-free_listint_safe.c](./102-free_listint_safe.c): Safely frees a `listint_t` linked list, including lists with loops, and returns the size of the list that was freed.

15. **Find the Loop**
    - [103-find_loop.c](./103-find_loop.c): Finds the loop in a `listint_t` linked list using a maximum of two variables and returns the node where the loop starts.

