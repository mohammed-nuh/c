#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head;

void insertAtEnd(int x){
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->next = NULL;

    if(head == NULL){
        head = newNode;
        return;
    }

    struct Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

void printLinkedList(){
    struct Node* temp = head;
    printf("Your linked list: ");
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main(){
    head = NULL;
    insertAtEnd(3);
    insertAtEnd(7);
    insertAtEnd(5);
    printLinkedList();
}