#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int c = 0;
    for( int i = 1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        printf("Prime !\n");
    }
    else 
    printf("Non Prime !\n");
    return 0;
}