#include <stdio.h>
int main () {
    int n, sum = 0;
    printf("Enter Number : ");
    scanf("%d", &n);
    printf("Show Number : ");
    for (int i = 1; i<=n; i++) {
        printf("%-2d", i);
    }
    return 0;
}