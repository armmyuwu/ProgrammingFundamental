#include <stdio.h>
int main()
{
    char a[99], b[99], c[99], d[99], e[99];
    printf("Enter message a : ");
    scanf("%s", a);
    printf("Enter message b : ");
    scanf("%s", b);
    printf("Enter message c : ");
    scanf("%s", c);
    printf("Enter message d : ");
    scanf("%s", d);
    printf("Enter message e : ");
    scanf("%s", e);
    
    printf("**** Output ****\n");
    printf("%.3s\n", a);
    printf("%.4s\n", b);
    printf("%.5s\n", c);
    printf("%.4s\n", d);
    printf("%.3s\n", e);
    return 0;
}