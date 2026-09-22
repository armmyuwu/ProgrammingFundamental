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
    struct home {
        char num[100];
        char road[100];
        char sub_dis[100];
        char dis[100];
        char province[100];
        char zip[10];
    };
    struct tele {
        char landline_num[15];
        char mobile_num[15];
        char fax_num[15];
    };
    struct info {
        char name[20], surname[30];
        int student_id;
        struct grade gradeinfo;
        struct home homeinfo;
        struct tele teleinfo;
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
        scanf("%s", &((p_info + i)->teleinfo.mobile_num));
        printf("Enter Landline Number : ");
        scanf("%s", &((p_info + i)->teleinfo.landline_num));
        printf("Enter Fax Number : ");
        scanf("%s", &((p_info + i)->teleinfo.fax_num));

        printf("Enter Home Number : ");
        scanf("%s", &(p_info + i)->homeinfo.num);
        printf("Enter Road : ");
        scanf("%s", &(p_info + i)->homeinfo.road);
        printf("Enter Sub District : ");
        scanf("%s", &(p_info + i)->homeinfo.sub_dis);
        printf("Enter District : ");
        scanf("%s", &(p_info + i)->homeinfo.dis);
        printf("Enter Province : ");
        scanf("%s", &(p_info + i)->homeinfo.province);
        printf("Enter ZIP-Code : ");
        scanf("%s", &(p_info + i)->homeinfo.zip);

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
                
                printf("Moblie Number : %s\n", (p_info + i)->teleinfo.mobile_num);
                printf("Landline Number : %s\n", (p_info + i)->teleinfo.landline_num);
                printf("Fax Number : %s\n", (p_info + i)->teleinfo.fax_num);

                printf("Home Number : %s\n", (p_info + i)->homeinfo.num);
                printf("Road : %s\n", (p_info + i)->homeinfo.road);
                printf("Sub District : %s\n", (p_info + i)->homeinfo.sub_dis);
                printf("District : %s\n", (p_info + i)->homeinfo.dis);
                printf("Province : %s\n", (p_info + i)->homeinfo.province);
                printf("ZIP-Code : %s\n", (p_info + i)->homeinfo.zip);

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