C - Singly Linked Lists
Tests ✅
Tests: This directory is for testing purposes.
Header File 📁
lists.h: This header file contains definitions and prototypes for all
types and functions used in the proje:wq
:wq

Type/File	Definition/Prototype
struct list_s	- char *str<br>- unsigned int len<br>- struct list_s *next
typedef list_t	struct list_s
0-print_list.c	size_t print_list(const list_t *h);
1-list_len.c	size_t list_len(const list_t *h);
2-add_node.c	list_t *add_node(list_t **head, const char *str);
3-add_node_end.c	list_t *add_node_end(list_t **head, const char *str);
4-free_list.c	void free_list(list_t *head)
Tasks 📃
Task 0: Print List
0-print_list.c: This C function prints all the elements of a list_t list.
If str is NULL, the function prints [0] (nil).
Task 1: List Length
1-list_len.c: This C function returns the number of elements
in a linked list_t list.
Task 2: Add Node
2-add_node.c: This C function adds a new node at the
beginning of a list_t list.
If the function fails, it returns NULL.
Otherwise, it returns the address of the new element.
Task 3: Add Node at the End
3-add_node_end.c: This C function adds a new node at
the end of a linked list_t list.
If the function fails, it returns NULL.
Otherwise, it returns the address of the new element.
Task 4: Free List
4-free_list.c: This C function frees a list_t list.
Task 5: The Hare and the Tortoise
100-first.c: This C function prints You're beat! and yet, you must allow,\nI bore my house upon my back!\n before the main
function is executed.
Task 6: Real Programmers Can Write Assembly Code in Any Language
101-hello_holberton.asm: This 64-bit assembly program
prints Hello, Holberton followed by a new line using only the
printf function without interrupts.
