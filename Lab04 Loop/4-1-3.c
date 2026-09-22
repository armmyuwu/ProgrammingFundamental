#include <stdio.h>
int main() {
    int count;
    printf ("Show number from hundred to zero\n\n");
    for (count=100; count >= 0; count--) {
        printf("%d\t", count);
    }
    return 0;
}
