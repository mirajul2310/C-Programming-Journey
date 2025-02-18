#include <stdio.h>

int main() {

    int source[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(source) / sizeof(source[0]);  // Get the size of the array
    int k = 3;  // Number of positions to shift

    // Shift all elements to the left by k positions
    for (int i = 0; i < n - k; i++) {
        source[i] = source[i + k];
    }

    // Fill the last k positions with 0
    for (int i = n - k; i < n; i++) {
        source[i] = 0;
    }

    // Print the array after shifting
    for (int i = 0; i < n; i++) {
        printf("%d ", source[i]);
    }

    return 0;
}
