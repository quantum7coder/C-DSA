#include <stdio.h>
// Function to perform Selection Sort for ascending order
void selectionSort(int arr[], int n) {  
    int i, j, min_idx, temp;  
    // One by one move boundary of unsorted subarray  
    for (i = 0; i < n - 1; i++) {  
        // Find the minimum element in unsorted array  
        min_idx = i;  
        for (j = i + 1; j < n; j++)  
            if (arr[j] < arr[min_idx])  
                min_idx = j;  
        // Swap the found minimum element with the first element  
        temp = arr[min_idx];  
        arr[min_idx] = arr[i];  
        arr[i] = temp;  
    }  
}  
// Function to print the array
void printArray(int arr[], int n) {  
    for (int i = 0; i < n; i++) {  
        printf("%d ", arr[i]);  
    }  
    printf("\n");  
}
int main() {
    int n;
    printf("============================================== Performing Selection Sort on an array ========================================================\n");
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: \n");
    for(int i=0;i<n;i++){
        printf("Element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    printArray(arr, n);

    selectionSort(arr, n);

    printf("\nSorted array (Selection Sort):\n");
    printArray(arr, n);

    return 0;
}
