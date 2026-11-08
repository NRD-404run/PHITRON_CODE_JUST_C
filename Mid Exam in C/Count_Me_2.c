#include<stdio.h>
int main()
{
    char a[100001],ch;
    scanf("%s",&a);
    int i=0;
    int consonant=0;
    while((ch=a[i]) !='\0')
    {
        if(ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u'){
        consonant++;
        }
        i++;
    }
    printf("%d\n",consonant);

}