#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, i, j;
    scanf("%d", &num);
    for (i=-num; i<=num; i++) {
        printf("\n");
        for (j=num; j>=-num; j--) {
            if (abs(i)+abs(j)>=num) {
                printf(" ");
            } else {
                printf("*");
            }
        }
    }
    return 0;
}