#include <stdio.h>
int main ()
{
    float a, b, c, d, e, f;
    printf("Enter Number a : ");
    scanf("%f", &a);
    printf("Enter Number b : ");
    scanf("%f", &b);
    printf("Enter Number c : ");
    scanf("%f", &c);
    printf("Enter Number d : ");
    scanf("%f", &d);
    e = a + b + c + d;
    f = e / 4;
    printf("Summation = %.2f\n", e);
    printf("Average = %.3f\n", f);

    return 0;

}