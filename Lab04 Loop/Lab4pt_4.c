#include <stdio.h>
int main() {
    char str[10];
    int i;
    printf("Enter string : ");
    scanf("%s", str);
    for (i=0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);
    }
    printf("Press ENTER to end Program");
    getchar();
    return 0;
}