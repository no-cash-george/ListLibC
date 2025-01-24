Linked List Library in C

This is a C library that implements a basic singly linked list data structure. The library supports four different types of linked lists: integer, character, float, and double. The library includes functions to create lists, add nodes, and destroy lists.

Features
* Support for multiple data types: Includes linked lists for integers, characters, floating-point numbers, and doubles.
* Dynamic memory management: The library dynamically allocates and deallocates memory as needed.
* Basic linked list operations:
* Creation of new lists.
* Adding new nodes to the end of the list.
* Destruction of entire lists to free memory.

Data Structures
* Char_node: Represents a node in a character linked list.
* Int_node: Represents a node in an integer linked list.
* Float_node: Represents a node in a float linked list.
* Double_node: Represents a node in a double linked list.

Each of these node structures contains:
* data: The value of the node (can be of type char, int, float, or double).
* next: A pointer to the next node in the list.

Additionally, there are head structures:
* Char_head
* Int_head
* Float_head
* Double_head

Each of these structures contains a pointer to the first node of the respective linked list.

Functions

List Creation Functions
* Int_node *int_list_creator(): Creates an empty linked list of integers.
* Char_node *char_list_creator(): Creates an empty linked list of characters.
* Float_node *float_list_creator(): Creates an empty linked list of floats.
* Double_node *double_list_creator(): Creates an empty linked list of doubles.

Node Addition Functions
* void add_node_int(Int_head *head, int data): Adds a new integer node to the list.
* void add_node_char(Char_head *head, char data): Adds a new character node to the list.
* void add_node_float(Float_head *head, float data): Adds a new float node to the list.
* void add_node_double(Double_head *head, double data): Adds a new double node to the list.

List Destruction Functions
* void destroy_int_list(Int_head *head): Destroys the linked list of integers and frees allocated memory.
* void destroy_char_list(Char_head *head): Destroys the linked list of characters and frees allocated memory.
* void destroy_float_list(Float_head *head): Destroys the linked list of floats and frees allocated memory.
* void destroy_double_list(Double_head *head): Destroys the linked list of doubles and frees allocated memory.

Example Usage

Here is an example of how to use the linked list library in a C program:
```
#include <stdio.h>
#include "linked_list.h"

int main() {
    // Create a linked list of integers
    Int_head my_list;
    my_list.first_node = int_list_creator();
    my_list.first_node->data = 3;
    my_list.first_node->next = NULL;

    // Add nodes to the list
    add_node_int(&my_list, 5);
    add_node_int(&my_list, 7);

    // Destroy the list to free memory
    destroy_int_list(&my_list);

    return 0;
}
```
Compilation and Linking

To compile and link the program with the library, use the following commands:
1.	Compile the source code:
```
	gcc main.c linked_list.c -o linked_list_program
```

2.	Run the program:
```
	./linked_list_program
```


Error Handling:

* Memory Allocation Failures: If memory allocation fails during the creation of a node or list, an error message is printed to stdout.
* Empty Lists: The functions for adding nodes assume that the first node of the list exists (i.e., lists are not empty). If no nodes are present, the list creation functions should be used to initialize the list first.

License

This library is open source and can be freely used or modified under the terms of the MIT license.
