#include <stdio.h>
int main()
{
    int a, b, temp;

    printf("Enter the firest number: ");
    scanf("%d", &a);

    printf("Enter the second number:");
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;

    printf("After Swap: a = %d, b = %d\n", a, b);
    return 0;
}

