#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
        char c = 'm';
        int i, r = 0;
        struct shop
        {
                char name[10];
                float high;
        };
        struct shop temp, sp[10] = { {"Alpha",131.3},
                                     {"Delta",134},
                                     {"Romeo",122},
                                     {"Fox",162},
                                     {"Golf",140},
                                     {"Jack",124},
                                     {"Tommy",140},
                                     {"Rub",170.4},
                                     {"Giffy",129.2},
                                     {"Ray",123.6}
                                   };
        for(i=0;i<10;i++)
                printf("\n [%d]: %s, %f",i,sp[i].name,sp[i].high);
        do {
        int k;

        for(i = 9; i > r; i--) {
                k = 0;

                while(sp[i-1].name[k] == sp[i].name[k] && sp[i-1].name[k] != '\0') {
                        k++;
                }

                if(sp[i-1].name[k] > sp[i].name[k])
                {
                        temp = sp[i-1];
                        sp[i-1] = sp[i];
                        sp[i] = temp;
                }
        }
        printf("\n==Round %d==",++r);
        //show
        for(i=0;i<10;i++)
                printf("\n [%d]: %s, %f",i,sp[i].name,sp[i].high);
        printf("\n x:exit");
        c = getch();
        } while(c != 'x');
        return 0;
}