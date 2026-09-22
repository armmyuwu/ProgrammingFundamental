#include <stdio.h>
int main() {
    int num=10
    ,i,j,sum;
    for (i=1; i<num; i++) {
        if (i%3==0 || i%5==0) {
            printf("%d ", i);
            j+=i;
        }
    } 
    printf("%d", j);
    return 0;
} 