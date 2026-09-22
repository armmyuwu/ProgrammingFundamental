#include <stdio.h>
int main() {
    int check,found,i,j;
    check = 0;
    for (i=1; found==0; i++) {
        check=0;
        for (j=1; j<=20; j++) {
            if (i%j == 0) {
                check++;
            }
        }
        if (check==20) {
        printf("%d", i);
        found=1;
    }
    }
    return 0;
}