#include <stdio.h>

int main() {
    char buff[10];

    printf("Enter a string:\n");

    // Read input from the user
    fgets(buff, sizeof(buff), stdin);

    printf("You entered: %s", buff);

    return 0;
}