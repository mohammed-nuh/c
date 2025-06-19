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

int minElement(struct BstNode* root){
    if(root == NULL){
        printf("Tree is Empty...\n");
        return -1;
    }
    while(root->left != NULL){
        root = root->left;
    }
    return root->data;
}

int minElement_recursive(struct BstNode* root){
    if(root == NULL){
        printf("Tree is Empty...\n");
        return -1;
    }
    else if(root->left == NULL){
        return root->data;
    }
    return minElement_recursive(root->left);
}

int main(){
    struct BstNode* root = NULL;
    minElement(root);
    root = insertNode(root, 15);
    root = insertNode(root, 10);
    root = insertNode(root, 20);
    root = insertNode(root, 25);
    root = insertNode(root, 8);
    root = insertNode(root, 12);
    root = insertNode(root, 19);

    int minEle1 = minElement(root);
    int minEle2 = minElement_recursive(root);

    printf("Min Elements: %d %d", minEle1, minEle2);
}
