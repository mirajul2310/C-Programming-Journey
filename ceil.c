#include <stdio.h>
#include <math.h>

int main()

{
    double d, result;
    printf("Enter the number :");
    scanf("%lf", &d);
    result = ceil (d);

    printf("ceil(%lf) = %lf\n",d,result);

    return 0;
}
