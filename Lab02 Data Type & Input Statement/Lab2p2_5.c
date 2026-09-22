#include <stdio.h>
int main()
{
    int a, b, c , d;
    printf ("Enter Number a : ");
    scanf ("%d",&a);
    printf ("Enter Number b : ");
    scanf ("%d",&b);
    c = a/b;
    d = a%b;
    printf("Divided : %d\n", c);
    printf("Fraction : %d\n", d);
    return 0;
}