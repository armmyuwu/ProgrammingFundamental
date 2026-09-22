#include <stdio.h>
int main() {
    int count=0;
    printf ("Show number from zero to ten\n\n");
    do {
        printf("%d\t", count);
        count++;
    } while (count <= 10);
    return 0;
}
