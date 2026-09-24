#include <stdio.h>
int findmax(int, int);
int main() {
    int x, y;
    printf("Enter Number 1 : ");
    scanf("%d", &x);
    printf("Enter Number 2 : ");
    scanf("%d", &y);
    if (x == y) {
        printf("Both numbers are equal = %d\n", x);
    } else {
        printf("Max number : %d\n", findmax(x, y));
    }
    return 0;
}

int findmax(int a, int b) {
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}