# 0x13. C - More singly linked lists

## General
- How to use linked lists
- Start to look for the right source of information without too much help

### 0. size_t print_listint(const listint_t *h);
Write a function that prints all the elements of a listint_t list.

### 1. size_t listint_len(const listint_t *h);
Write a function that returns the number of elements in a linked listint_t list.

### 2. listint_t *add_nodeint(listint_t **head, const int n);
Write a function that adds a new node at the beginning of a listint_t list.

### 3. listint_t *add_nodeint_end(listint_t **head, const int n);
Write a function that adds a new node at the end of a listint_t list.

### 4. void free_listint(listint_t *head);
Write a function that frees a listint_t list.

### 5. void free_listint2(listint_t **head);
Write a function that frees a listint_t list.

### 6. int pop_listint(listint_t **head);
function that deletes the head node, and returns the head node’s data (n).

### 7. listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
Write a function that returns the nth node of a listint_t linked list.

### 8. int sum_listint(listint_t *head);
Write a function that returns the sum of all the data (n) of a listint_t linked list.

### 9. listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
Write a function that inserts a new node at a given position.

### 10. int delete_nodeint_at_index(listint_t **head, unsigned int index);
Write a function that deletes the node at index index of a listint_t linked list.
