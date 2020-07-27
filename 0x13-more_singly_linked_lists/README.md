# 0x13. C - More singly linked lists

This project is a continuation of 0x12. C - Singly linked lists

### struct listint_s - structure used for the examples

typedef struct listint_s

{

    int n;

    struct listint_s *next;
    
} listint_t;

See: [lists.h](./lists.h)

## [0-print_listint.c](./0-print_listint.c)

Prints all the elements of a listint_s list

## [1-listint_len.c](./1-listint_len.c)

Returns the number of elements in a linked listint_s list

## [2-add_nodeint.c](./2-add_nodeint.c)

Adds a new node at the beginning of a listint_t list

## [3-add_nodeint_end.c](./3-add_nodeint_end.c)

Adds a new node at the end of a listint_t list

## [4-free_listint.c](./4-free_listint.c)

Frees a listint_t list

## [5-free_listint2.c](./5-free_listint2.c)

Frees a listint_t list and sets the head to NULL

## [6-pop_listint.c](./6-pop_listint.c)

Deletes the head node of a listint_t list, and returns the head node's data (n)

## [7-get_nodeint.c](./7-get_nodeint.c)

Returns the nth node of a listint_t list

## [8-sum_listint.c](./8-sum_listint.c)

Returns the sum of all the data (n) of a listint_t list

## [9-insert_nodeint.c](./9-insert_nodeint.c)

Inserts a new node in a given position

## [10-delete_nodeint.c](./10-delete_nodeint.c)

Deletes the node node at index *index* of a listint_t list

## [lists.h](./lists)

Contains all the headers, struct(s), and prototypes used in every function

## Advanced 

To be updated