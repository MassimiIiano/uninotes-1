#include <stdio.h>

int main() {

    int lines = 0, words = 0, characters = 0;

    char c;
    char prev = ' ';
    while ((c = getchar()) != EOF) {
        characters++;
        if (c == '\n') {
            lines++;
        }
        if (
            (c == ' ' || c == '\n' || c == '\t') && 
            (prev != ' ' && prev != '\n' && prev != '\t')
        ) {
            words++;
        }
        prev = c;
    }

    printf("%d %d %d\n", lines, words, characters);
    return 0;
}