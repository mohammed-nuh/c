#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* previous;
};

struct Node* head;

struct Node* getNewNode(int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->previous = NULL;
    return newNode;
}

void insertAtHead(int data){
    struct Node* newNode = getNewNode(data);
    if(head == NULL){
        head = newNode;
        return;
    }
    head->previous = newNode;
    newNode->next = head;
    head = newNode;
}

void printLinkedList(){
    struct Node* temp = head;
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void reverseLinkedList(){
    struct Node* temp = head;
    if(temp == NULL) return;
    while(temp->next != NULL){
        temp = temp->next;
    }

    printf("Reverse List: ");
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->previous;
    }
    printf("\n");
}

int main(){  
    head = NULL;
    insertAtHead(3);
    insertAtHead(5);
    insertAtHead(4);
    insertAtHead(8);
    printLinkedList();
    reverseLinkedList();
}