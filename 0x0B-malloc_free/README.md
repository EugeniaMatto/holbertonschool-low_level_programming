# 0x0B. C - malloc, free

## General:
- What is the difference between automatic and dynamic allocation
- What is malloc and free and how to use them
- Why and when use malloc
- How to use valgrind to check for memory leak

### 0. `char *create_array(unsigned int size, char c);`
Write a function that creates an array of chars, and initializes it with a specific char.
  
### 1. `char *_strdup(char *str);`
Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
  
### 2. `char *str_concat(char *s1, char *s2);`
Write a function that concatenates two strings.
  
### 3. `int **alloc_grid(int width, int height);`
Write a function that returns a pointer to a 2 dimensional array of integers.
  
### 4. `void free_grid(int **grid, int height);`
Write a function that frees a 2 dimensional grid previously created by your alloc_grid function.
  
### 5. `char *argstostr(int ac, char **av);`
Write a function that concatenates all the arguments of your program.
  
### 6. `char **strtow(char *str);`
Write a function that splits a string into words.
