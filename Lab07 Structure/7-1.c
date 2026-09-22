#include <stdio.h>
#include <string.h>
int main()
{
        struct student
        {
                int ID;
                char name[10];
        };
        struct student s1, s2, s3;
        printf("Student 1 : \n");
        scanf("%s", s1.name);
        scanf("%d", &s1.ID);
        printf("Student 2 : \n");
        scanf("%s", s2.name);
        scanf("%d", &s2.ID);
        printf("Student 3 : \n");
        scanf("%s", s3.name);
        scanf("%d", &s3.ID);
        printf("%s %d\n", s1.name, s1.ID);
        printf("%s %d\n", s2.name, s2.ID);
        printf("%s %d\n", s3.name, s3.ID);
        return 0;
}