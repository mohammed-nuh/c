#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main(){
    struct Node* head;
    head = NULL;

    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));

    temp->data = 2;
    temp->next = NULL;
    head = temp;

    temp = (struct Node*)malloc(sizeof(struct Node));

    temp->data = 4;
    temp->next = NULL;

    struct Node* temp1 = head;
    while(temp1->next != NULL){
        temp1 = temp1->next;
    }
    temp1->next = temp;

    temp = (struct Node*)malloc(sizeof(struct Node));

    temp->data = 6;
    temp->next = NULL;

    temp1 = head;
    while(temp1->next != NULL){
        temp1 = temp1->next;
    }
    temp1->next = temp;

    temp1 = head;
    printf("Your Linked List: ");
    while(temp1 != NULL){
        printf("%d ", temp1->data);
        temp1 = temp1->next;
    }
}