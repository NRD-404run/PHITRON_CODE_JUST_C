#include<stdio.h>
#include<string.h>
int main()
{
    char s[101];
    scanf("%s",&s);
    int i,capital,small,digit;
    i=capital=small=digit=0;
    for(i=0; i<strlen(s); i++)
    {
        if(s[i] != '\0' && s[i] <= '9')
        {
            digit++;
        }
        else if(s[i] >='a' && s[i] <='z' )
        {
            small++;
        }
        else if(s[i] >='A' && s[i]<='Z')
        {
            capital++;
        }
    }
    printf("Number of digits = %d\n",digit);
    printf("Number of small letter = %d\n",small);
    printf("Number of capital letter = %d\n",capital);
}