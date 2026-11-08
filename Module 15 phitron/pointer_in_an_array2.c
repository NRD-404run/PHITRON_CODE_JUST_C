#include<stdio.h>
int main()
{
    int a[5] = {10,20,30,40,50};
    printf("Array 0th index address : %p\n",&a[0]);
    printf("Array name : %p\n",a);
    printf("%d\n",*a);
    printf("%d\n",*(a+1));
    printf("%d\n",*(a+2));
    printf("%d\n",*(a+3));
    printf("%d\n",*(a+4));
}