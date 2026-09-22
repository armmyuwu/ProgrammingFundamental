#include <stdio.h>
#define N 50
void swap(char *, char *);
void show_messages(char *);
int main() {
    int i,a,b;
    char str[5][N];
    for (i=0; i<5; i++) {
        printf("Enter Message %d : ", i+1);
        gets(*str+i*N);
    }
    show_messages(*str);
    printf("END PROGRAM");
    return 0;
}

void swap(char *s1, char *s2) {
    int i;
    char temp[N];

}

void show_messages(char *s) {
    int i;
    for (i=0; i<5; i++) {
        printf("Message %d : %s\n",i+1, s+i*N);
    }
}