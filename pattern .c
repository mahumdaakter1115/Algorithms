#include <stdio.h>
#include <stdlib.h>

void printPattern(int N) {
    int totalRows = 2 * N - 1;
    int middleRow = N;


    for (int row = 1; row <= N; row++) {
        int spaces = N - row;
        int arrows = 2 * row - 1;


        for (int i = 1; i <= spaces; i++) {
            printf(" ");
        }


        for (int i = 1; i <= arrows; i++) {
            if (i <= row)
                printf(">");
            else
                printf(">");
        }

        printf("\n");
    }


    for (int row = N - 1; row >= 1; row--) {
        int spaces = N - row;
        int arrows = 2 * row - 1;


        for (int i = 1; i <= spaces; i++) {
            printf(" ");
        }


        for (int i = 1; i <= arrows; i++) {
            if (i <= row)
                printf("<");
            else
                printf("<");
        }

        printf("\n");
    }
}

int main() {
    int N;
    scanf("%d", &N);

    printPattern(N);

    return 0;
}
