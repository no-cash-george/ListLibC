#include <stdio.h>
#include <stdlib.h>
#include "listlib.h"

void destroy_int_list(Int_head *head)
{
    Int_node *current = head->first_node;
    Int_node *temp;

    while (current != NULL)
    {
        temp = current;
        current = current->next;
        free(temp);
    }
    head->first_node = NULL;
}

void destroy_char_list(Char_head *head)
{
    Char_node *current = head->first_node;
    Char_node *temp;

    while (current != NULL)
    {
        temp = current;
        current = current->next;
        free(temp);
    }
    head->first_node = NULL;
}

void destroy_float_list(Float_head *head)
{
    Float_node *current = head->first_node;
    Float_node *temp;

    while (current != NULL)
    {
        temp = current;
        current = current->next;
        free(temp);
    }
    head->first_node = NULL;
}

void destroy_double_list(Double_head *head)
{
    Double_node *current = head->first_node;
    Double_node *temp;

    while (current != NULL)
    {
        temp = current;
        current = current->next;
        free(temp);
    }
    head->first_node = NULL;
}

Int_node *int_list_creator()
{
    Int_node *first = (Int_node *)malloc(1 * sizeof(Int_node));

    if (first == NULL)
    {
        puts("List creation failed");
        return NULL;
    }

    first->next = NULL;

    return first;
}

Char_node *char_list_creator()
{
    Char_node *first = (Char_node *)malloc(1 * sizeof(Char_node));

    if (first == NULL)
    {
        puts("List creation failed");
        return NULL;
    }

    first->next = NULL;

    return first;
}

Float_node *float_list_creator()
{
    Float_node *first = (Float_node *)malloc(1 * sizeof(Float_node));

    if (first == NULL)
    {
        puts("List creation failed");
        return NULL;
    }

    first->next = NULL;

    return first;
}

Double_node *double_list_creator()
{
    Double_node *first = (Double_node *)malloc(1 * sizeof(Double_node));

    if (first == NULL)
    {
        puts("List creation failed");
        return NULL;
    }

    first->next = NULL;

    return first;
}

void add_node_int(Int_head *head, int data)
{
    Int_node *current = head->first_node;

    // Go to the last node
    while (current->next != NULL)
    {
        current = current->next;
    }

    // Create new node and assign data
    Int_node *new_node = (Int_node *)malloc(sizeof(Int_node));
    if (new_node == NULL)
    {
        puts("Memory allocation failed for new node");
        return;
    }
    new_node->data = data;
    new_node->next = NULL; // New node's next is NULL

    // Link the new node to the last node
    current->next = new_node;
}

void add_node_char(Char_head *head, char data)
{
    Char_node *current = head->first_node;

    // Go to the last node
    while (current->next != NULL)
    {
        current = current->next;
    }

    // Create new node and assign data
    Char_node *new_node = (Char_node *)malloc(sizeof(Char_node));
    if (new_node == NULL)
    {
        puts("Memory allocation failed for new node");
        return;
    }
    new_node->data = data;
    new_node->next = NULL; // New node's next is NULL

    // Link the new node to the last node
    current->next = new_node;
}

void add_node_float(Float_head *head, float data)
{
    Float_node *current = head->first_node;

    // Go to the last node
    while (current->next != NULL)
    {
        current = current->next;
    }

    // Create new node and assign data
    Float_node *new_node = (Float_node *)malloc(sizeof(Float_node));
    if (new_node == NULL)
    {
        puts("Memory allocation failed for new node");
        return;
    }
    new_node->data = data;
    new_node->next = NULL; // New node's next is NULL

    // Link the new node to the last node
    current->next = new_node;
}

void add_node_double(Double_head *head, double data)
{
    Double_node *current = head->first_node;

    // Go to the last node
    while (current->next != NULL)
    {
        current = current->next;
    }

    // Create new node and assign data
    Double_node *new_node = (Double_node *)malloc(sizeof(Double_node));
    if (new_node == NULL)
    {
        puts("Memory allocation failed for new node");
        return;
    }
    new_node->data = data;
    new_node->next = NULL; // New node's next is NULL

    // Link the new node to the last node
    current->next = new_node;
}