#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head;

void insert(int x){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = head; // 1 line code for below 2 lines
    // temp->next = NULL;
    // if(head != NULL) temp->next = head;
    head = temp;
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

    int n, i, x;
    printf("Enter numbers to put in linked list: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("Enter number: ");
        scanf("%d", &x);
        insert(x);
    }
    printLinkedList();
}