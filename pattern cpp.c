#include <iostream>
#include <string>

void printPattern(int N) {
    int totalRows = 2 * N - 1;
    int middleRow = N;

    // Print the top half of the pattern
    for (int row = 1; row <= N; row++) {
        int spaces = N - row;
        int arrows = 2 * row - 1;

        // Print leading spaces
        for (int i = 1; i <= spaces; i++) {
            std::cout << " ";
        }

        // Print arrows
        for (int i = 1; i <= arrows; i++) {
            if (i <= row)
                std::cout << ">";
            else
                std::cout << "<";
        }

        std::cout << std::endl;
    }

    // Print the bottom half of the pattern
    for (int row = N - 1; row >= 1; row--) {
        int spaces = N - row;
        int arrows = 2 * row - 1;

        // Print leading spaces
        for (int i = 1; i <= spaces; i++) {
            std::cout << " ";
        }

        // Print arrows
        for (int i = 1; i <= arrows; i++) {
            if (i <= row)
                std::cout << ">";
            else
                std::cout << "<";
        }

        std::cout << std::endl;
    }
}

int main() {
    int N;
    std::cin >> N;

    printPattern(N);

    return 0;
}
