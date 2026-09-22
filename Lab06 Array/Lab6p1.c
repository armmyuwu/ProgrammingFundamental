#include <stdio.h>
int main() {
    int m[3][3], i, j, check=1;
    printf("Enter Matrix :\n");
    for (i = 0; i<3; i++) { 
        for (j = 0; j<=0; j++) {
            scanf("%d %d %d", &m[i][j], &m[i][j+1], &m[i][j+2]);
        }
    }
    for (i = 0; i<3; i++) { 
        for (j = 0; j<3; j++) {
            if (i == j) {
                if (m[i][j] != 1)
                    check = 0;
            }
            else if (i != j) {
                if (m[i][j] != 0) {
                    check = 0;
                }
            }
        }
    }
    if (check == 1)
        printf("Identity Matrix");
    else
        printf("Not Identity Matrix");
    return 0;
}