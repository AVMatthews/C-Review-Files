/*
 * main.c: Demo starting point
 * Copyright 2019 Akhil Guliani
 */


#include <stdio.h>
#include "./linked_list.h"

int main(int argv, char** argc) {
    
    printf("Hello world!\n");
    
    node* head = NULL;
    int i = 0;
    head = add_node(head, 11);
    print_list(head);
    printf("\n");

    for(i=0; i< 10; i++){
        head = add_node(head, i);
        print_list(head);
        printf("\n");
    }

    for(i=10; i > 0; i--){
        head = remove_node(head, i);
        print_list(head);
        printf("\n");
    }

    head = remove_node(head, 11);
    print_list(head);
    head = remove_node(head, 0);
    print_list(head);
    return 0;
}
