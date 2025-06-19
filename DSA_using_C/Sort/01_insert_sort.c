#include <stdio.h>

void insertionSortWhile(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i]; 
        int j = i - 1; 

        // Move elements greater than key
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--; 
        }
        arr[j + 1] = key; 
    }
}

int main() {
    int arr[] = {9, 5, 1, 4, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Choose which one to run:
    // insertionSortFor(arr, n);
    insertionSortWhile(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}