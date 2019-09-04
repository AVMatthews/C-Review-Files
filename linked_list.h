/*
 * linked_list.h: Simple singly linked list
 * Copyright 2019 Akhil Guliani
 */

#ifndef MY_LIST_H
#define MY_LIST_H

#include <stdio.h>
#include <stdlib.h>

typedef struct listNode {
    int data;
    struct listNode* next;
} node;

node* add_node(node* head, int value);
node* remove_node(node* head, int value);
node* find_node(node* head, int value);
void print_list(node* head);


#endif // MY_TREE_H