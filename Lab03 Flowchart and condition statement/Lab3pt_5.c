#include <stdio.h>
int main () {
    float gpa1, gpa2, gps;
    printf("Enter GPA 1: ");
    scanf("%f", &gpa1);
    if (gpa1 < 1) {
        printf("Your Status: Retired\n");
    } else if (gpa1 < 2) {
        printf("Your Status: Probation\n");
        printf("Enter GPS 2: ");
        scanf("%f", &gps);
        printf("Enter GPA 2: ");
        scanf("%f", &gpa2);
        if (gps < 2) {
            printf("Your Status: Retired\n");
        } else if (gps == 2) {
            printf("Your Status : Probation\n");
        } else if (gpa2 > 2) {
            printf("Your Status : Normal\n");
        }

    } else if (gpa1 >= 2) {
        printf("Your Status: Normal\n");
        printf("Enter GPS 2: ");
        scanf("%f", &gps);
        printf("Enter GPA 2: ");
        scanf("%f", &gpa2);
        if (gpa2 < 2) {
            printf("Your Status: Probation\n");
        } else {
            printf("Your Status : Normal\n");
        }
    }
    return 0;
}