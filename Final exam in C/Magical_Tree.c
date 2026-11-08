#include <stdio.h>
int main()
{
    int N, i, j;
    scanf("%d", &N);
    int val = 1;
    int total_row;
    if (N == 1)
    {
        total_row = 6;
    }
    else
    {
        total_row = N + 4;
    }
    int last_line = (total_row * 2) - 1;
    int space = last_line / 2;
    for (i = 1; i <= total_row; i++)
    {

        for (j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= val; j++)
        {
            printf("*");
        }
        printf("\n");
        val += 2;
        space--;
    }
    space = (last_line - N) / 2;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= N; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}