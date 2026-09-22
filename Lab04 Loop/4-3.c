#include <stdio.h>
int main() {
    int num1, num2, divide, fraction;
    printf("Enter Number 1 : ");
    scanf("%d", &num1);
    printf("Enter Number 2 : ");
    scanf("%d", &num2);
    if (num2 == 0) {
        for (int i =0; num2==0; i++) {
            printf("Error divided by zero, Enter Number 2 again : ");
            scanf("%d", &num2);
        }
        divide = num1/num2;
        fraction = num1%num2;
        printf("Divided : %d\n", divide);
        printf("Fraction : %d", fraction);
    } else {
        divide = num1/num2;
        fraction = num1%num2;
        printf("Divided : %d\n", divide);
        printf("Fraction : %d", fraction);
    }
    return 0;
}