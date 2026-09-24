#include <stdio.h>
void primecheck(int);
int main() {
    int num1, num2, i, valid = 0;
    do {
    printf("Enter number 1 : ");
    scanf("%d", &num1);
    printf("Enter number 2 : ");
    scanf("%d", &num2);
    if (num1 > num2) {
        printf("Invalid input\n");
    }
    else {
        valid = 1;
    }
    } while (valid==0);

    printf("\nPrime numbers from %d to %d :\n", num1, num2);
    for (i = num1; i <= num2; i++) {
        primecheck(i);
    }
    printf("\n");
    return 0;
}

void primecheck(int a) {
    int i, prime = 1;
    if (a < 2) {
        prime = 0;
    } 
    else {
        for (i = 2; i <= a/2 && prime == 1; i++) {
            if (a % i == 0) {
                prime = 0;
            }
        }
    }
    if (prime == 1) {
        printf("%4d", a);
    }
}