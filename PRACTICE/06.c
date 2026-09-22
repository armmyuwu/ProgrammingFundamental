#include <stdio.h>
#include <math.h>

int main() {
    int num, i, j;
    scanf("%d", &num);
    for (i=-num; i<=num; i++) {
        printf("\n");
        for (j=num; j>=-num; j--) {
            // printf("%d ", abs(i)+abs(j));
            if (abs(i)+abs(j)!=num) {
                printf(" ");
            }
            else {
                printf("*");
            }
        }
    }
    return 0;
}