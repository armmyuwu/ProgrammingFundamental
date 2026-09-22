#include <stdio.h>
int main() 
{
    int num[10], temp, max, i, j;
    printf("Enter number :\n");
    for (i = 0; i<10; i++) {
        scanf("%d", &num[i]);
    }
    for (i=0; i<10; i++) {
        max = i;
        for (j = i+1; j < 10; j++) {
            if (num[j] > num[max]) {
                max = j;
            }
            temp = num[i];
            num[i] = num[max];
            num[max] = temp;
        }
    } 
    for (i = 0; i<10; i++) {
        printf("%d ", num[i]);
    }
    
    return 0;
}
