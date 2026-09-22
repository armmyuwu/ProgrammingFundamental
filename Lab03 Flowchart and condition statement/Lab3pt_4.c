#include <stdio.h>
int main () {
    int side1, side2, side3;
    printf("Enter side1 : ");
    scanf("%d", &side1);
    printf("Enter side2 : ");
    scanf("%d", &side2);
    printf("Enter side3 : ");
    scanf("%d", &side3);
    if (side1 > side2 && side1 > side3){
        if (side1*side1 == side2*side2 + side3*side3)
            printf("Right triangle\n");
        else
            printf("Not a right triangle\n");
    } else if (side2 > side1 && side2 > side3){
        if (side2*side2 == side1*side1 + side3*side3)
            printf("Right triangle\n");
        else
            printf("Not a right triangle\n");
    } 
    else if (side3 > side1 && side3 > side2){
        if (side3*side3 == side1*side1 + side2*side2)
            printf("Right triangle\n");
        else
            printf("Not a right triangle\n");
    }
    return 0;
}