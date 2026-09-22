#include <stdio.h>
int main()
{
    char name1[99], name2[99], name3[99];
    char surname1[99], surname2[99], surname3[99];
    char ID1[99], ID2[99], ID3[99];
    printf("Student1\n");
    printf(" Name    : ");
    scanf("%s", name1);
    printf(" Surname : ");
    scanf("%s", surname1);
    printf(" ID      : ");
    scanf("%s", ID1);
    printf("Student2\n");
    printf(" Name    : ");
    scanf("%s", name2);
    printf(" Surname : ");
    scanf("%s", surname2);
    printf(" ID      : ");
    scanf("%s", ID2);
    printf("Student3\n");
    printf(" Name    : ");
    scanf("%s", name3);
    printf(" Surname : ");
    scanf("%s", surname3);
    printf(" ID      : ");
    scanf("%s", ID3);
    printf("+-------------------------------------------+----------+\n");
    printf("| %-20s %-21s| %-9s|\n", name1, surname1, ID1);
    printf("| %-20s %-21s| %-9s|\n", name2, surname2, ID2);
    printf("| %-20s %-21s| %-9s|\n", name3, surname3, ID3);
    printf("+-------------------------------------------+----------+\n");
    return 0;
}