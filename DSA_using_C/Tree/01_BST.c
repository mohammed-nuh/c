#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct BstNode {
    int data;
    struct BstNode* left;
    struct BstNode* right;
};

struct BstNode* getNode(int data){
    struct BstNode* newNode = (struct BstNode*)malloc(sizeof(struct BstNode));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
}

struct BstNode* insertNode(struct BstNode* root, int data){
    if(root == NULL){
        root = getNode(data);
    } else if (data <= root->data) {
        root->left = insertNode(root->left, data);
    } else {
        root->right = insertNode(root->right, data);
    }
}

void inorder(struct BstNode* root) {
    if (root == NULL) return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

bool searchNode(struct BstNode* root, int data){
    if (root == NULL) return false;
    else if (data == root->data) return true;
    else if (data <= root->data) return searchNode(root->left, data);
    else return searchNode(root->right, data);
}

int main(){
    struct BstNode* root = NULL;
    root = insertNode(root, 15);
    root = insertNode(root, 10);
    root = insertNode(root, 20);
    root = insertNode(root, 25);
    root = insertNode(root, 8);
    root = insertNode(root, 12);
    root = insertNode(root, 19);

    printf("Inorder Traversal: ");
    inorder(root);

    if(searchNode(root, 10)){
        printf("\nFound");
    } else {
        printf("\nNot Found");
    }
}
