#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int line = 1;
    for (int i = 1; i < n * 2; i += 2)
    {
        for (int s = 1; s <= ((n * 2 - 1) - i) / 2; s++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            if (line > 1 && line % 2 == 0)
                printf("<");
            else
                printf(">");
        }
        for (int s = 1; s <= ((n * 2 - 1) - i) / 2; s++)
        {
            printf(" ");
        }
        printf("\n");
        line++;
    }

    for (int i = n * 2 - 3; i >= 1; i -= 2)
    {
        for (int s = 1; s <= ((n * 2 - 1) - i) / 2; s++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            if (line > 1 && line % 2 == 0)
                printf("<");
            else
                printf(">");
        }
        for (int s = 1; s <= ((n * 2 - 1) - i) / 2; s++)
        {
            printf(" ");
        }
        printf("\n");
        line++;
    }

    return 0;
}
