#include <stdio.h>
int main() {
    int num, check, prime, count, i, j;
    count=0;
    printf("Enter Number : ");
    scanf("%d", &num);
    for (i=2; i<num; i++) {
        check=0;
        for (j=2; j<=i; j++) {
            if (i%j==0) {
                check++;
            }
        } 
        if (check==1) {
            prime+=i;
            count++;
        }
    }
    printf("%d\n", prime);
    printf("%d\n", count);
    return 0;
}