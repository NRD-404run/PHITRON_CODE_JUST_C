#include<stdio.h>
#include<string.h>
int count_digit_small_cap(char s[], int *cnt_dig, int *cnt_cap, int *cnt_sml)
{
    for(int i=0; i<strlen(s); i++)
    {
        if(s[i] >= '0' && s[i] <='9')
        {
            (*cnt_dig)++;
        }
         if(s[i] >= 'a' && s[i] <='z')
        {
            (*cnt_sml)++;
        }
          if(s[i] >= 'A' && s[i] <='Z')
        {
            (*cnt_cap)++;
        }

    }
}
int main()
{
    char s[100];
    scanf("%s",&s);
    int count_digit = 0, count_small = 0, count_cap = 0;
    count_digit_small_cap(s,&count_digit,&count_cap, &count_small);
    printf("%d %d %d",count_digit,count_cap,count_small);
}