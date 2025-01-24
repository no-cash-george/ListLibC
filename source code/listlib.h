// listlib.h

#ifndef LISTLIB_H
#define LISTLIB_H

// Structs definition
typedef struct char_node
{
    char data;
    struct char_node *next;
} Char_node;

typedef struct int_node
{
    int data;
    struct int_node *next;
} Int_node;

typedef struct float_node
{
    float data;
    struct float_node *next;
} Float_node;

typedef struct double_node
{
    double data;
    struct double_node *next;
} Double_node;

typedef struct char_head
{
    Char_node *first_node;
} Char_head;

typedef struct int_head
{
    Int_node *first_node;
} Int_head;

typedef struct float_head
{
    Float_node *first_node;
} Float_head;

typedef struct double_head
{
    Double_node *first_node;
} Double_head;

// List creators
Int_node *int_list_creator();
Char_node *char_list_creator();
Float_node *float_list_creator();
Double_node *double_list_creator();

// Node adders
void add_node_int(Int_head *head, int data);
void add_node_char(Char_head *head, char data);
void add_node_float(Float_head *head, float data);
void add_node_double(Double_head *head, double data);

// List destroyers
void destroy_int_list(Int_head *head);
void destroy_char_list(Char_head *head);
void destroy_float_list(Float_head *head);
void destroy_double_list(Double_head *head);

#endif // LISTLIB_H