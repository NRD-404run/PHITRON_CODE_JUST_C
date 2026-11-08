#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int flag = 100;
    if (r == c) // square matrix
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i+j == r-1)
                {
                    // we are now at diagonal
                }
                else
                {
                    // we are now at outside diagonal
                    if (a[i][j] != 0)
                    {
                        flag = 200;
                        goto end; 
                    }
                }
            }
        }
        end:
        if(flag == 100)
        {
            printf("This is a secondary diagonal matrix\n");
        }
        else{
             printf("This is not a secondary  diagonal matrix\n");
        }
    }
    else{
        printf("This is not a secondary diagonal matrix");
    }
}