#include <stdio.h>
int main() {
    int number;
    float sum=0, n;
    printf("Enter number : ");
    scanf("%d", &number);
    for (int i = 1; i<= number; i++) {
        printf("Number %d : ", i);
        scanf("%f", &n);
        sum += n;
    }
    printf("Summation : %f", sum);
    return 0;
}