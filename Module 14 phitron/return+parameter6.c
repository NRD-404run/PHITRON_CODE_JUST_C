//you are given a positive integer n.
//Now print the sum of last digit and first digit of the given integers.
//Implement it using function.

//Note - It is guaranted that will the integers will be a 4 digit value.
#include<stdio.h>
int summation_of_first_last_digit(int x)
{
    int last_digit = x % 10;
    int first_digit = x / 1000;

    int sum = first_digit + last_digit;

    return(sum);
}
int main()
{
    int n;
    scanf("%d",&n);
    int ans = summation_of_first_last_digit(n);
    printf("%d",ans);
}