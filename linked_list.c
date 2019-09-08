
#include "./linked_list.h"

// vcreate and return an empty node
node* create_node(int value) {
    node* tmp = (node*) malloc(sizeof(node));
    tmp->data = value;
    printf("%d: ",  (*tmp).data);
    tmp->next = NULL;
    return tmp;
}

node* add_node(node* head, int value){
    if (head == NULL){
        return create_node(value);
    } else {
        node* curr_node = head;
        while (curr_node->next != NULL){
            curr_node = curr_node->next;
        }
        curr_node->next = create_node(value);
        return head;
    }
}

node* remove_node(node* head, int value){

    return head;
}

node* find_node(node* head, int value){
    node* curr_node = head;
    while (curr_node != NULL){
        if (curr_node->data == value){
            return curr_node;
        }
        curr_node = curr_node->next;
    }
    return NULL;
}

void print_list(node* head){
    node* curr_node = head;
    while (curr_node != NULL){
        printf("%d ", curr_node->data);
        curr_node = curr_node->next;
    }
}
