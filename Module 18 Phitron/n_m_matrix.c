//n*m Matrix.Print first row and first column from the matrix.
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
    
    int spec_r = 0;
    for(int j=0; j<c; j++)
    {
        printf("%d ",matrix[spec_r][j]);
    }
    printf("\n");

    int spec_c = 0;
    for(int j=0; j<r; j++)
    {
        printf("%d ",matrix[j][spec_c]);
    }

} 