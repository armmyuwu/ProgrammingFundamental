#include <stdio.h>

int main() {
    float number = 1, sum = 0;
    int i = 1;
    while (number != 0) {
        printf("Number %d : ", i);
        scanf("%f", &number);
        sum += number;
        i++;
    }
    printf("Summation is = %f", sum);
    return 0;
}