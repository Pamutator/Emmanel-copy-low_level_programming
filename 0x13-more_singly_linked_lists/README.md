## Tasks
### [0.Print list](0-print_listint.c)
- A function that prints all the elements of a listint\_t list
- __Returns__ the number of nodes in the linked list

### [1.List length](1-listint_len.c)
- A function that returns the number of elements in a linked listint\_t list.

### [2.Add node](2-add_nodeint.c)
- A function that adds a new node at the beginning of a listint\_t list.
- __Returns__ the address of the new element, or NULL if it failed

### [3.Add node at the end](3-add_nodeint_end.c)
- A function that adds a new node at the end of a listint\_t list.
- __Returns__ the address of the new element, or NULL if it failed

### [4. Free list](4-free_listint.c)
- A function that frees a listint\_t list.

### [5. Free](5-free_listint2.c)
- A function that frees a listint\_t list.
- The function sets the head to NULL

### [6. Pop](6-pop_listint.c)
- A function that deletes the head node of a listint\_t linked list, and returns the head node’s data (n).
- if the linked list is empty return 0

### [7. Get node at index](7-get_nodeint.c)
- A function that returns the nth node of a listint\_t linked list.
- where index is the index of the node, starting at 0
- if the node does not exist, return NULL

### [8. Sum list](8-sum_listint.c)
- A function that returns the sum of all the data (n) of a listint\_t linked list.
- if the list is empty, return 0

### [9. Insert](9-insert_nodeint.c)
A function that inserts a new node at a given position.
- where idx is the index of the list where the new node should be added. Index starts at 0
- __Returns__ the address of the new node, or NULL if it failed
- if it is not possible to add the new node at index idx, do not add the new node and return NULL

### [10. Delete at index](10-delete_nodeint.c)
- A function that deletes the node at index index of a listint\_t linked list.
- where index is the index of the node that should be deleted. Index starts at 0
- __Returns__ 1 if it succeeded, -1 if it failed

### [11. Reverse list](100-reverse_listint.c)
- A function that reverses a listint_t linked list
- __Returns__ a pointer to the first node of the reversed list

### [12. Print (safe version)](101-print_listint_safe.c)
- A function that prints a listint\_t linked list.
- __Returns__ the number of nodes in the list
- This function can print lists with a loop

### [13. Free (safe version)](102-free_listint_safe.c)
- A function that frees a listint_t list.
- This function can free lists with a loop
- __Returns__ the size of the list that was free’d
- The function sets the head to NULL

### [14. Find the loop](103-find_loop.c)
- A function that finds the loop in a linked list.
- __Returns__ The address of the node where the loop starts, or NULL if there is no loop
