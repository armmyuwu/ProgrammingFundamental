#include <stdio.h>
int main() {
    int num, r1=0, r2=0, r3=0, r4=0, i;
    float avg=0;
    printf("How many students : ");
    scanf("%d", &num);
    int h[num];
    for (i=1; i<=num; i++) {
        printf("Student [%d] : ", i);
        scanf("%d", &h[i]);
        if (h[i] >= 0 && h[i] <= 160) {
            r1++;
        }
        else if (h[i] >= 161 && h[i] <= 170) {
            r2++;
        }
        else if (h[i] >= 171 && h[i] <= 180) {
            r3++;
        }
        else if (h[i] >= 181 && h[i] <= 200) {
            r4++;
        }
        avg += h[i];
    }
    printf("R1: %d\nR2: %d\nR3: %d\nR4: %d\n", r1, r2, r3, r4);
    printf("Average Heights : %.2f", (float)avg/num);
    return 0;
}