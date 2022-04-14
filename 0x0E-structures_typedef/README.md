# 0x0E. C - Structures, typedef

## General
- What are structures, when, why and how to use them
- How to use typedef

### 0. Define a new type struct dog with the following elements:
- name, type = char *
- age, type = float
- owner, type = char *
### 

###  1. Write a function that initialize a variable of type struct dog.
- Prototype: `void init_dog(struct dog *d, char *name, float age, char *owner);`  
### 

###  2. Write a function that prints a struct dog.
- Prototype: `void print_dog(struct dog *d)`;  
### 

###  3. Define a new type dog_t as a new name for the type struct dog.
### 
  
###  4. Write a function that creates a new dog.
- Prototype: dog_t `*new_dog(char *name, float age, char *owner);`  
### 

###  5. Write a function that frees dogs.
- Prototype: `void free_dog(dog_t *d);`  
### 
