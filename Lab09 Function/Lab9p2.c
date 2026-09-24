#include <stdio.h>
int findmax(int, int);
int main() {
    int x, y, z;
    printf("Enter Number 1 : ");
    scanf("%d", &x);
    printf("Enter Number 2 : ");
    scanf("%d", &y);
    printf("Enter Number 3 : ");
    scanf("%d", &z);
    if (x == y && y == z) {
        printf("All numbers are equal to %d\n", x);
    } else {
        printf("Max number : %d\n", findmax(findmax(x, y), z));
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