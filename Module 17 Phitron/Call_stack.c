#include<stdio.h>
void mello()
{
    printf("Mello");
}
void gello()
{
    printf("Gello\n");
    mello();

}
void hello()
{
    printf("Hello\n");
    gello();

}
int main()
{
    printf("Hi\n");
    hello();

}