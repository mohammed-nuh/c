#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* top = NULL;

void push(int x){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = top;
    top = temp;
}

void pop(){
    if(top == NULL){
        return;
    }
    struct Node *temp = top;
    top = top->next;
    free(temp);
}

void printLinkedList(){
    struct Node* temp = top;
    printf("Your stack using linked list: ");
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main(){
    push(5);
    push(7);
    push(2);
    pop();
    push(8);
    printLinkedList();
}