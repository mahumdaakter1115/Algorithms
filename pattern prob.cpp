#include<bits/stdc++.h>
using namespace std;

void printPattern(int N)
{
    int totalRows = 2 * N - 1;
    int middleRow = N;


    for (int row = 1; row <= N; row++)
    {
        int spaces = N - row;
        int arrows = 2 * row - 1;


        for (int i = 1; i <= spaces; i++)
        {
            cout << " ";
        }


        for (int i = 1; i <= arrows; i++)
        {
            cout << (i <= row ? "<" : ">");
        }

        cout << std::endl;
    }


    for (int row = N - 1; row >= 1; row--)
    {
        int spaces = N - row;
        int arrows = 2 * row - 1;


        for (int i = 1; i <= spaces; i++)
        {
            cout << " ";
        }


        for (int i = 1; i <= arrows; i++)
        {
            cout << (i <= row ? "<" : ">");
        }

        cout << endl;
    }
}

int main()
{
    int N;
    cin >> N;

    printPattern(N);

    return 0;
}
