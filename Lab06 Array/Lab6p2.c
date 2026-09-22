#include <stdio.h>
int main() {
    int a[3][3], b[3][3], c[3][3];
    int i, j, k;
    printf("Enter Matrix A:\n");
    for (i = 0; i<3; i++) { 
        for (j = 0; j<=0; j++) {
            scanf("%d %d %d", &a[i][j], &a[i][j+1], &a[i][j+2]);
        }
    }
    printf("\nEnter Matrix B:\n");
    for (i = 0; i<3; i++) { 
        for (j = 0; j<=0; j++) {
            scanf("%d %d %d", &b[i][j], &b[i][j+1], &b[i][j+2]);
        }
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            c[i][j] = 0;
            for (k = 0; k < 3; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("\nMATRIX MULTIPLICATION\n");
    for (i = 0; i<3; i++) { 
        for (j = 0; j<3; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
