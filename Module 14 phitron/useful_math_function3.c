#include<stdio.h>
#include<math.h>
int main()
{
    int ans = round(3.6); //round always print 0.5 to 0.99 hole upper value
    int ans2 = round(3.4); //and round also print 0.1 to 0.49 hole lower value

    printf("%d %d",ans,ans2);
    return 0;

}