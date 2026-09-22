#include<stdio.h>
int main()
{
    int a, b, c, d;
    printf ("Enter Number a : ");
    scanf ("%d",&a);
    printf ("Enter Number b : ");
    scanf ("%d",&b);
    printf ("Enter Number c : ");
    scanf ("%d",&c);
    d = (a + b + c) / 3;
    printf ("Average = %d", d);
    return 0;
}