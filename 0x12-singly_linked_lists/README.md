# singly linked lists

## [0. Print list](0-print_list.c)

- A function that prints all the elements of a list_t list.
- Prototype: size_t print_list(const list_t h);
- Return: the number of nodes.
- If str is NULL, print [0] (nil). 

## [1.List length](1-list_len.c)

- A function that returns the number of elements in a linked list_t list.
- Prototype: size_t list_len(const list_t h);

## [2. Add node](2-add_node.c)

- A function that adds a new node at the beginning of a list_t list.
- Prototype: list_t *add_node(list_t *head, const char *str);
- Return: the address of the new element, or NULL if it failed.


## [3. Add node at the end](3-add_node_end.c)

- A function that adds a new node at the end of a list_t list.
- Prototype: list_t * add_node_end(list_t * head, const char *str);
- Return: the address of the new element, or NULL if it failed


## [4. Free list](4-free_list.c)

- A function that frees a list_t list.
- Prototype: void free_list(list_t *head);

## [5. The Hare and the Tortoise](100-first.c)

- A function that prints You're beat! and yet, you must allow,\nI bore my house upon my back!\n before the main function is executed.

## [6. Real programmers can write assembly code in any language](101-hello_holberton.asm)
- A 64-bit program in assembly that prints Hello, Holberton, followed by a new line.
