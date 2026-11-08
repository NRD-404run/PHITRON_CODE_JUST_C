#include<stdio.h>
int is_palindrome(char S[])
{
    int l=0, r=strlen(S)-1;
    while(l<r)
    {
        if(S[l] != S[r])
        {
            return 0;
        }
        l++;
        r--;
    }
    return 1;
}
int main()
{
    char S[1001];
    scanf("%s",&S);
    int Palindrome = is_palindrome(S);
    if(Palindrome == 1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
}