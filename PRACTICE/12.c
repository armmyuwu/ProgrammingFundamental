#include <stdio.h>
int main() {
    int i,j,check,count=0,found=0;
    for (i=2; found==0; i++) {
        check=0;
        for (j=2; j<=i; j++) {
            if (i%j==0) {
                check++;
            }
        }
        if (check==1) {
            count++;
            if (count==10001) {
                printf("%d", i);
                found=1;
            }
        }
    }
    return 0;
}