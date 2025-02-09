#include <stdio.h>

int main() {
    float numbers[10]; // Array to store 10 numbers
    float largest;
    int i;

    printf("Enter 10 numbers:\n");

    // Input numbers into the array
    for (i = 0; i < 10; i++) {
        scanf("%f", &numbers[i]);
    }

    // Assume the first number is the largest
    largest = numbers[0];

    // Compare each number in the array to find the largest
    for (i = 1; i < 10; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }

    printf("\nThe largest number is: %.2f\n", largest);

    return 0;
}
