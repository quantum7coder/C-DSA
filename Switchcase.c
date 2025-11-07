#include <stdio.h>//Standard input-output header file
#include <stdlib.h>//Standard library header file
int main() {
    int number = 2;
//Switch-case statement to handle multiple conditions and used for control flow based on the value of 'number'.
//Switch case are used in Menu driven programs, State machines, Parsing input, Handling enumerations, Command processing.
    printf("1. One\n2. Two\n3. Three\n");
    printf("Enter a number (1-3): ");
    scanf("%d", &number);
    switch (number) {
        case 1:
            printf("Number is one.\n");
            break;
        case 2:
            printf("Number is two.\n");
            break;
        case 3:
            printf("Number is three.\n");
            break;
        default:
            printf("Number is not one, two, or three.\n");
            break;
    }

    return 0;
}