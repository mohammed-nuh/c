#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX_SIZE 100

int A[MAX_SIZE];
int top = -1;

void push(int x){
    if(top == MAX_SIZE - 1){
        printf("Stack Overflow...\n");
        return;
    }
    A[++top] = x;
}

void pop(){
    if(top == -1){
        printf("Empty array...\n");
        return;
    }
    top--;
}

void Print(){
    for(int i = 0; i <= top; i++){
        printf("%d ", A[i]);
    }
    printf("\n");
}

bool isEmpty(){
    if(top == -1){
        return true;
    }
    return false;
}

int topEle(){
    return A[top];
}

int main(){
    if(isEmpty()){
        printf("Array is empty...\n");
    }
    push(10);Print();
    push(2);Print();
    push(5);Print();
    push(12);Print();
    pop();Print();
    push(11);Print();
    printf("%d", topEle());
}