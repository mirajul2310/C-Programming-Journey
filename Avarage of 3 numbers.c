

#include <stdio.h>

int main() {
    int num1, num2, num3;
    float average;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    average = (num1 + num2 + num3) / 3.0;
    printf("Average = %.2f", average);

    return 0;
}
