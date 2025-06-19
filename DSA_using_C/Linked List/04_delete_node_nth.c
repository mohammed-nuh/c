#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head;

void Insert(int data, int n){
    struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node));
    temp1->data = data;
    temp1->next = NULL;
    if(n == 1){
        temp1->next = head;
        head = temp1;
        return;
    }

    struct Node* temp2 = head;
    for(int i = 1; i < n-2; i++){
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
}

void deleteNode(int n){
    struct Node* temp1 = head;
    if(n == 1){
        head = temp1->next;
        free(temp1);
        return;
    }
    struct Node* temp2 = head;
    for(int i = 0; i<n-2; i++){
        temp2 = temp2->next;
    }
    temp1 = temp2->next;
    temp2->next = temp1->next;
    free(temp1);
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
    Insert(2,1);
    Insert(3,2);
    Insert(4,3);
    Insert(5,4);
    printLinkedList();
    int n;
    printf("Enter a postion: ");
    scanf("%d", &n);
    deleteNode(n);
    printLinkedList();
}