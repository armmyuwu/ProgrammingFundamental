#include <stdio.h>
int main() {
    int choice,num1,num2,num3,sum;
    float avg;
    printf("Enter Number1: ");
    scanf("%d", &num1);
    printf("Enter Number2: ");
    scanf("%d", &num2);
    printf("Enter Number3: ");
    scanf("%d", &num3);
    do {
        printf("\n===== MENU =====\n");
        printf("1. Find Sum\n");
        printf("2. Find Average\n");
        printf("3. Find Maximum\n");
        printf("4. Find Minimum\n");
        printf("5. Exit\n");
        printf("================\n");
        printf("Choose: ");
        scanf("%d", &choice);
        if (choice==1) {
            sum=num1+num2+num3;
            printf("\nSum: %d", sum);
        } 
        else if (choice==2) {
            avg=(num1+num2+num3)/3.0;
            printf("\nAverage: %f", avg);
        }
        else if (choice==3) {
            if (num1>num2 && num1>num3) {
                printf("\nMaximum: %d", num1);
            }
            else if (num2>num1 && num2>num3) {
                printf("\nMaximum: %d", num2);
            }
            else if (num3>num2 && num3>num1) {
                printf("\nMaximum: %d", num3);
            }
        }
        else if (choice==4) {
            if (num1<num2 && num1<num3) {
                printf("\nMinimum: %d", num1);
            }
            else if (num2<num1 && num2<num3) {
                printf("\nMinimum: %d", num2);
            }
            else if (num3<num2 && num3<num1) {
                printf("\nMinimum: %d", num3);
            }
        }
    } while (choice!=5);
    printf("Exit Program");
    return 0;
}