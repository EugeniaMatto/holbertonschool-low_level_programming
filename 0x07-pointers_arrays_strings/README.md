# 0x07. C - Even more pointers, arrays and strings

## *General*
- What are `pointers to pointers` and how to use them
- What are `multidimensional arrays` and how to use them
- What are the most common C standard library functions to manipulate strings

#
 *Functions:*

0. `char *_memset(char *s, char b, unsigned int n);`  
Write a function that fills memory with a constant byte.


1. `char *_memcpy(char *dest, char *src, unsigned int n);`  
Write a function that copies memory area.


2. `char *_strchr(char *s, char c);`  
Write a function that locates a character in a string.


3. `unsigned int _strspn(char *s, char *accept);`  
Write a function that gets the length of a prefix substring.


4. `char *_strpbrk(char *s, char *accept);`  
Write a function that searches a string for any of a set of bytes.


5. `char *_strstr(char *haystack, char *needle);`  
Write a function that locates a substring.


7. `void print_chessboard(char (*a)[8]);`  
Write a function that prints the chessboard.


8. `void print_diagsums(int *a, int size);`  
Write a function that prints the sum of the two diagonals of a square matrix of integers.

*Advanced task:*   
9.`void set_string(char **s, char *to);`  
Write a function that sets the value of a pointer to a char.
