#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    int matrix[r][c];
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }

    for(int j=0; j<c; j++)
    {
        printf("%d ",matrix[r-1][j]);
    }
    printf("\n");

    for(int j=0; j<r; j++)
    {
        printf("%d ",matrix[j][c-1]);
    }
    printf("\n");
}