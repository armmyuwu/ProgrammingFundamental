#include <stdio.h>
int main() {
    int num,i,j,k;
    scanf("%d", &num);
    for (i=1; i<=num; i++) {
        if (i==1 || i==num) {
            for (j=1; j<=i; j++) {
                printf("*");
            }
        }
        else {
            printf("*");
            for (k=1; k<=i-2; k++) {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
    return 0;
}