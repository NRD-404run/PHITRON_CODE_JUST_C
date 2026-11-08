#include <stdio.h>
int count_before_one(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            return count;
        }
        count++;
    }
    return count;
}
int main()
{
    int N;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    int result = count_before_one(arr, N);
    printf("%d", result);
}