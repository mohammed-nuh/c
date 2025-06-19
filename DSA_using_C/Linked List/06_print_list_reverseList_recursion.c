#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* Insert(struct Node* head, int data, int n){
    struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node));
    temp1->data = data;
    temp1->next = NULL;
    if(n == 1){
        temp1->next = head;
        head = temp1;
        return head;
    }

    struct Node* temp2 = head;
    for(int i = 0; i < n-2; i++){
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
    return head;
}

void printLinkedList(struct Node* head){
    struct Node* temp = head;
    printf("Linked list using iteration: \n");
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void Print(struct Node* n){
    if(n == NULL){
        return;
    }
    printf("%d ", n->data);
    Print(n->next);
}

void reversePrint(struct Node* n){
    if(n == NULL){
        printf("\n");
        return;
    }
    reversePrint(n->next);
    printf("%d ", n->data);
}

int main(){  
    struct Node* head = NULL;
    head = Insert(head, 2,1);
    head = Insert(head, 3,2);
    head = Insert(head, 4,3);
    head = Insert(head, 5,4);
    printLinkedList(head);
    printf("\nLinked lists using recursion: \n");
    Print(head);
    reversePrint(head);
}