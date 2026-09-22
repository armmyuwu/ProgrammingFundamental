#include <stdio.h>

int main() {
    int num, i, j;
    scanf("%d", &num);
    for (i=1; i<=num; i++) {
        for (j=1; j<=i; j++) {
            printf("*");
        }
        for (j=1; j<=2*(num-i); j++) {
            printf(" ");
        }
        for (j=1; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (i=num-1; i>=1; i--) {
        for (j=1; j<=i; j++) {
            printf("*");
        }
        for (j=1; j<=2*(num-i); j++) {
            printf(" ");
        }
        for (j=1; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}