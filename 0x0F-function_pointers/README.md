# **0x0F. C - Function pointers**

## General:
- What are function pointers and how to use them.
- What does a function pointer exactly hold.
- Where does a function pointer point to in the virtual memory.

##
### Write a function that prints a name.
`void print_name(char *name, void (*f)(char *));`

##
### Write a function that executes a function given as a parameter on each element of an array.
`void array_iterator(int *array, size_t size, void (*action)(int));`

##
### Write a function that searches for an integer.
`int int_index(int *array, int size, int (*cmp)(int));`
where size is the number of elements in the array array
cmp is a pointer to the function to be used to compare values
int_index returns the index of the first element for which the cmp function does not return 0
If no element matches, return -1
If size <= 0, return -1

##
### Write a program that performs simple operations.
`int (*get_op_func(char *s))(int, int);`

