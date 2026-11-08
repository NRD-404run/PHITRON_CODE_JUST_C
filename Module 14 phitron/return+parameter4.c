#include<stdio.h>
int sub(int num1,int num2)
{
    int ans = num1 - num2;
    return ans;
}

int sum(int num1,int num2)
{
    int ans = num1 + num2;
    return ans;
}

int main()
{
    int val = sum(-10,50);
    int val2 = sub(20,30);
    printf("%d %d",val,val2);
    return 0;
}
