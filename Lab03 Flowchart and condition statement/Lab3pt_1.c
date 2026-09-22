#include <stdio.h>
int main () {
    float num1, num2, num3, num4, sum;
    printf("Enter num1 : \n");
    scanf("%f", &num1);
    printf("Enter num2 : \n");
    scanf("%f", &num2);
    printf("Enter num3 : \n");
    scanf("%f", &num3);
    printf("Enter num4 : \n");
    scanf("%f", &num4);
    sum = num1 + num2 + num3 + num4;
    printf("Sum = %.2f\n", sum);
    return 0;
}