#include <stdio.h>
int main() {
    struct profile {
        char name[20];
        int age;
    } human[10];
    for (int i=0; i<10; i++) {
        printf("Character %d\n", i+1);
        printf("name : ");
        scanf("%s", human[i].name);
        printf("age : ");
        scanf("%d", &human[i].age);
    }
    for (int i=0; i<10; i++) {
        if (human[i].age < 20) {
            printf("\n%s,%d", human[i].name, human[i].age);
        }
    }
    return 0;
}