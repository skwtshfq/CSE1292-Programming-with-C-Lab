#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ans = 0;
    for( int i =1;i<=n;i++)
    {
        int t = i*2;
        ans = ans + t*t;
    }
    printf("%d",ans);
    return 0;
}