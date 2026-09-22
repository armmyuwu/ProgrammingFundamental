#include <stdio.h>

int main() {
    char line[10000], words[1000][100];
    int word_lens[1000], count = 0, i = 0;

    printf("input:  ");
    if (fgets(line, sizeof(line), stdin)) {
        while (line[i] != '\0') {
            while (line[i] == ' ' || line[i] == '\n') {
                i++;
            }
            if (line[i] != '\0') {
                int len = 0;
                
                while (line[i] != ' ' && line[i] != '\n' && line[i] != '\0') {
                    words[count][len] = line[i];
                    len++;
                    i++;
                }

                words[count][len] = '\0';
                word_lens[count] = len;
                count++;
            }
        }
    }

    printf("output\t: %d words\n", count);
    for (int k = 0; k < count; k++) 
    {
        printf("%-12s: %d\n", words[k], word_lens[k]);
    }

    return 0;
}   