# 0x17. C - Doubly Linked Lists

## Description

This project is about implementing **doubly linked lists** in C.  
A doubly linked list is a data structure where each node contains:

- An integer (`n`)
- A pointer to the previous node (`prev`)
- A pointer to the next node (`next`)

This allows a bidirectional traversal of the list and more efficient insertions or deletions.

You will implement several operations on `dlistint_t` linked lists such as:
printing, counting nodes, adding nodes at the beginning or the end, inserting,
deleting, and freeing the entire list.

---

## Data Structure

```c
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
