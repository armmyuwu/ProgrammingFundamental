#include <stdio.h>
int main()
{
    int n;
    printf("Enter n-gon : ");
    scanf("%d", &n);
    printf("The Sum of Interior Angles of %d-gon : %d", n, (n - 2) * 180);
    return 0;
}