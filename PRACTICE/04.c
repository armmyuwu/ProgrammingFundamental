#include <stdio.h>
int main() {
    int num,i,j;
    scanf("%d", &num);
    for (i=1; i<=num; i++) {
        if (i==1 || i==num) {
            for (j=1; j<=num; j++) {
                printf("* ");
            }
        }
        else if (i!=1 || i!=num) {
            printf("* ");
            for (j=2; j<=num-1; j++) {
                printf("  ");
            }
            printf("*");
        }
        printf("\n");
    }
    return 0;
}