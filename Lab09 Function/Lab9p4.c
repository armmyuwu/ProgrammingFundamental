#include <stdio.h>
int char_string(char *, int);
int main() {
    char str[100];
    int result, i = 0, check = 0, num;
    printf("Enter a message : ");
    fgets(str, sizeof(str), stdin);
    printf("Enter Mode (0 or 1) : ");
    scanf("%d", &num);
    while (str[i] != '\0' && check == 0) {
        if (str[i] == '\n') {
            str[i] = '\0';
            check = 1;
        }
        i++;
    }
    result = char_string(str, num);
    if (num == 0) {
        printf("characters in the string is : %d\n", result);
    } 
    else if (num == 1) {
        printf("vowels in the string is : %d\n", result);
    } 
    else {
        printf("Invalid mode\n");
    }

    return 0;
}

int char_string(char *str, int mode) {
    int i, count = 0;
    if (mode == 0) {
        for (i = 0; str[i] != '\0'; i++) {
            count++;
        }
    } else if (mode == 1) {
        for (i = 0; str[i] != '\0'; i++) {
            char c = str[i];
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                count++;
            }
        }
    }
    return count;
}