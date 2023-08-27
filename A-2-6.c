#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ans = INT_MAX;
    for( int i = 1;i<=n;i++)
    {
        if(n%i==0)
        {
            int a = i;
            int b = n/i;
            char x[20];
            char y[20];
            snprintf(x,sizeof(x),"%d%d",a,b);
            snprintf(y,sizeof(y),"%d%d",b,a);
            int c ;
            if(atoi(x)>=atoi(y))
            c= atoi(y);
            else c = atoi(x);

            if(c<ans) ans= c;


        }
    }
     printf("%d",ans);
    return 0;
   
}