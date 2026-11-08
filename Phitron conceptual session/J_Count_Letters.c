#include<stdio.h>
#include<string.h>
void fre_count(char s[], int freq[])
{
    int len = strlen(s);
    for(int i=0; i<len; i++)
    {
        //printf("%d ",s[i]);
        int idx = s[i] - 97;
        //printf("%d\n",idx);
        freq[idx]++;
    }
}
int main()
{
    char s[100001];
    scanf("%s",&s);
    int freq[26] = {0};
    fre_count(s, freq);
    for(int i = 0; i<26; i++)
    {
        if(freq[i] > 0)
        {
            printf("%c : %d\n",i+97,freq[i]);
        }
    }
}