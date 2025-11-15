#include <stdio.h>
// Function to perform Bubble Sort for ascending order
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    int swapped;
    // Outer loop for each pass 
    for (i = 0; i < n - 1; i++) {
        swapped = 0; // Track if any swap happened
        // Inner loop for comparing adjacent elements
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        // If no swaps happened, the array is already sorted
        if (swapped == 0)
            break;
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
    printf("============================================== Performing Bubble Sort on an array ========================================================\n");
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

    bubbleSort(arr, n);

    printf("\nSorted array (Bubble Sort):\n");
    printArray(arr, n);

    return 0;
}
