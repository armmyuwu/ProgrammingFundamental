#include <stdio.h>
#include <string.h>
#define N 2
int main() {
    int i, search;
    float gpa;
    struct grade {
        char prog;
        char phy;
        char cal;
        char com;
    };
    struct info {
        char name[20], surname[30];
        int student_id;
        char tele[15];
        struct grade gradeinfo;
    } student[N], *p_info = student;
    
    for (i = 0; i < N; i++) {
        printf("\n--- Student [%d] ---\n", i+1);
        printf("Enter Name : ");
        scanf("%s", (p_info + i)->name);
        printf("Enter Surname : ");
        scanf("%s", (p_info + i)->surname);
        printf("Enter Student ID : ");
        scanf("%d", &((p_info + i)->student_id));
        printf("Enter Mobile Number : ");
        scanf("%s", &((p_info + i)->tele));

        printf("Enter Grade Programming : ");
        scanf(" %c", &((p_info + i)->gradeinfo.prog));
        printf("Enter Grade Physics : ");
        scanf(" %c", &((p_info + i)->gradeinfo.phy));
        printf("Enter Grade CalculuS : ");
        scanf(" %c", &((p_info + i)->gradeinfo.cal));
        printf("Enter Grade Computer Basics : ");
        scanf(" %c", &((p_info + i)->gradeinfo.com));
    }
    do {
        printf("\nEnter Student ID to search (0 to exit) : ");
        scanf("%d", &search);
        if (search == 0) {
            break;
        }
        int found = 0;
        for (i = 0; i < N && found <= 0; i++) {
            if ((p_info + i)->student_id == search) {
                found = 1;
                float p1, p2, p3, p4;
                if ((p_info + i)->gradeinfo.prog == 'F') {
                    p1 = 0.0;
                } else {
                    p1 = 4.0 - ((p_info + i)->gradeinfo.prog - 'A');
                }
                if ((p_info + i)->gradeinfo.phy == 'F') {
                    p2 = 0.0;
                } else {
                    p2 = 4.0 - ((p_info + i)->gradeinfo.phy - 'A');
                }
                if ((p_info + i)->gradeinfo.cal == 'F') {
                    p3 = 0.0;
                } else {
                    p3 = 4.0 - ((p_info + i)->gradeinfo.cal - 'A');
                }
                if ((p_info + i)->gradeinfo.com == 'F') {
                    p4 = 0.0;
                } else {
                    p4 = 4.0 - ((p_info + i)->gradeinfo.com - 'A');
                }
                gpa = (p1 + p2 + p3 + p4) / 4.0;
                printf("\nName : %s %s\n", (p_info + i)->name, (p_info + i)->surname);
                printf("Student ID : %d\n", (p_info + i)->student_id);
                printf("Moblie Number : %s\n", (p_info + i)->tele);
                printf("Programming : %c\n", (p_info + i)->gradeinfo.prog);
                printf("Physics : %c\n", (p_info + i)->gradeinfo.phy);
                printf("Calculus : %c\n", (p_info + i)->gradeinfo.cal);
                printf("Computer Basics : %c\n", (p_info + i)->gradeinfo.com);
                printf("GPA : %.2f\n", gpa);
            }
        }
 
        if (!found) {
            printf("Search not found\n");
        }
    } while (search != 0);
    return 0;
}