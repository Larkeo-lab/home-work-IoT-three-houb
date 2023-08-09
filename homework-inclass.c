#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int check(char s[], char a[], char ch);
void rep_(char s[], char a[]);

int main(void) {
    char ref[5][100] = { "meet at midnight",
                         "let there be love",
                         "we will rock you",
                         "don't worry be happy",
                         "what a wonderful world" };
    char solution[100] = { 0 };
    char answer[100] = { 0 };
    char ch;
    int tries = 20;
    srand((unsigned)time(NULL));
    int index = rand() % 5; // select sentence randomly
    strcpy(solution, ref[index]);
    rep_(solution, answer);
    while (1) {
        if (tries == 0) {
            printf("You have used all the limited number of times.\n");
            break;
        }
        printf("Please enter a string: %s\n", answer);
        printf("Guess the letter: ");
        ch = getchar();
        getchar();
        if (check(solution, answer, ch) == 1) {
            printf("Correct answer. Quitting the game.\n");
            break;
        }
        tries--;
    }
    return 0;
}

void rep_(char s[], char a[]) {
    int i;
    for (i = 0; s[i] != '\0'; i++) {
        if (isspace(s[i])) {
            a[i] = ' ';
        } else {
            a[i] = '_';
        }
    }
}

int check(char s[], char a[], char ch) {
    int i;
    int found = 0;
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == ch) {
            a[i] = ch;
            found = 1;
        }
    }
    if (strcmp(s, a) == 0) return 1;
    else return found;
}