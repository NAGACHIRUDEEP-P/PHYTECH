#include <stdio.h>

int main() {
    int myInt;
    float myFloat;

    // Asking for user input
    printf("Enter an integer: ");
    scanf("%d", &myInt);

    // Converting integer to float
    myFloat = (float)myInt;

    // Printing the results
    printf("Original Integer: %d\n", myInt);
    printf("Converted Float: %.2f\n", myFloat);

    return 0;
}



SAMPLE OUTPUT :
Enter an integer: 7
Original Integer: 7
Converted Float: 7.00
