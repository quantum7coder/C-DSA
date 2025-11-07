#include <stdio.h>//Standard input-output header file
void main(){
    int *ptr;
    int n, i;

    // Asking user for the number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Dynamically allocating memory using malloc()
    ptr = (int*)malloc(n * sizeof(int));

    // Checking if the memory has been successfully allocated
    if(ptr == NULL) {
        printf("Memory not allocated.\n");
        return 1; // Exit if memory allocation fails
    }

    // Storing values in the allocated memory
    for(i = 0; i < n; i++) {
        ptr[i] = i + 1; // Assigning values 1 to n
    }

    // Printing the values stored in the allocated memory
    printf("The elements are: ");
    for(i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // Freeing the allocated memory
    free(ptr);
}