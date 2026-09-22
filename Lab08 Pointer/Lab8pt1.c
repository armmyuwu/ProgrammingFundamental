#include <stdio.h>
#define N 2
int main() {
    int i, j, found, duplicate;
    char c;
    float num[N], search;
    float *pt_num = num;

    for (i = 0; i < N; i++) {
        do {
            printf("ENTER NUMBER [%d] : ", i + 1);
            scanf("%f", (pt_num + i));
            
            duplicate = 0;
            for (j = 0; j < i && duplicate <= 0; j++) {
                if (*(pt_num + j) == *(pt_num + i)) {
                    duplicate = 1;
                }
            }
            if (duplicate == 1) {
                printf("This number already enter\n");
            }

        } while (duplicate == 1);
    }
    do {
        printf("SEARCH : ");
        scanf("%f", &search);
        found = 0;
        for (i=0; i<N && found <= 0 ; i++) { 
            if (*(pt_num + i) == search) {
                printf("Position %d, Number = %f\n", i+1, *(pt_num + i));
                found = 1;
            }
        }
        if (found == 0) {
            printf("Cannot find the matched data\n");
        }
        printf("Search again? (Y/N): ");
        scanf(" %c", &c);
    } while (c =='y' || c =='Y');
    return 0;
}