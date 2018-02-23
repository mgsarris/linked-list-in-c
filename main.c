#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
    int data;
    struct node *nextNode;
};

struct node* head;
struct node* tail;

//Insert nodes appends data to the list (Ideally with tail being the last element WIP)
void insertNode(int data){
    if (head == NULL){
        struct node *new_node = (struct node*) malloc(sizeof(struct node));
        new_node->data = data;
        head = new_node;
        return;
    }

    struct node *ptr = head;
    while(ptr->nextNode!=NULL){
        ptr = ptr->nextNode;
    }

    struct node *new_node = (struct node*) malloc(sizeof(struct node));
    ptr->nextNode = new_node;

    if(new_node == NULL){
        exit(0);
    }
    new_node->data = data;
    new_node->nextNode = tail;

    return;
}

void printList(){
    struct node *ptr = head;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr = ptr->nextNode;
    }

    printf("\b\n");

    return;
}

int main(){
    insertNode(1);
    insertNode(2);
    insertNode(3);
    insertNode(4);

    printList();

    return 0;
}