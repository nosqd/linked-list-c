# linked-list-c

Simple, funny implementation of linked list in C

# Dependencies
- libc

# Example
Provided in `main.c``

# TODO
Removing from list

Inserting to list

Searching in list (the primitive one)

# Documentation
## Acronyms
> LLN - stands for linked list node

> LL - stands for linked list

## ll_val_type
Define in linked-list.h that stands what type is items in linked-list, by default `voidptr`

## lln_create
Creates a linked-list node/list.

```c
node *lln_create(void);
```

Example
```c
    node* list = lln_create(); // We just create a linked-list
```

## lln_value
Returns a value of node

```c
ll_val_type lln_value(node *n);
```

Example
```c
    node* list = lln_create();
    ...
    node* list_node = ll_get(list, 0);
    void* list_node_value = lln_value(list_node); // We just get list_node value
```

## lln_next
Returns a next node of node (if node is last returns `NULL`)

```c
node *lln_next(node *n);
```

Example
```c
    node* list = lln_create();
    ...
    node* first_node = ll_get(list, 0);
    node* second_node = lln_next(first_node); // We just get node right after first_node
```

## ll_size
Returns a size of linked list

```c
int ll_size(node *start);
```

Example
```c
    node* list = lln_create();
    ...
    int linked_list_size = ll_size(list); // We just get a list size
```

## ll_get
Returns element by index from linked list, if not exists returns `NULL`

```c
node *ll_get(node *start, int index);
```

Example

```c
    node* list = lln_create();
    ...
    node* third_node = ll_get(list, 2); // 2 because of indexing starts from 0
```

## ll_last
Returns last element from linked list 

```c
node *ll_last(node *start);
```

Example
```c
    node* list = lln_create();
    ...
    node* last_element = ll_last(list);
```

## ll_append
Adds item to the end of list

```c
void ll_append(node *start, ll_val_type value);
```

Example
```c
    node* list = lln_create();
    ll_append(list, "Hello");
    ll_append(list, "World");
```
