#include<stdio.h>
int sum(int num1, int num2)
{
    int ans = num1 + num2;
    return ans;
}
int main()
{
    int val = sum(10,10);
    int val2 = sum(100,200);
    int val3 = sum(2,3);
    printf("%d %d %d",val,val2,val3);
    return 0;
}