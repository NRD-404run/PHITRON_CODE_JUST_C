#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    for (int t = 0; t < T; t++)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        int copy_arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            copy_arr[i] = arr[i];
        }

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (copy_arr[i] > copy_arr[j])
                {
                    int temp = copy_arr[i];
                    copy_arr[i] = copy_arr[j];
                    copy_arr[j] = temp;
                }
            }
        }
        int R[n];
        for (int i = 0; i < n; i++)
        {
            R[i] =abs( arr[i] - copy_arr[i]);
        }

        for (int i = 0; i < n; i++)
        {
            printf("%d ", R[i]);
        }
        printf("\n");
    }
}