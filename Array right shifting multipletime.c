#include <stdio.h>

int main() {
    int source[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(source) / sizeof(source[0]);  // Get the size of the array
    int k = 3;  // Number of times to shift right

    // Perform the shift operation k times
    for (int i = 0; i < k; i++) {
        // Shift all elements to the right by 1 position
        for (int i = n - 1; i > 0; i--) {
            source[i] = source[i - 1];
        }

        // Set the first position to 0
        source[0] = 0;
    }

    // Print the array after shifting
    for (int i = 0; i < n; i++) {
        printf("%d ", source[i]);
    }

    return 0;
}

