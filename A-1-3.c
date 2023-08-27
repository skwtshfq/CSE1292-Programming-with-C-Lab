#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int mx ,mn;
    if(a>b && a>c ) mx = a;
    else if(b>c && b>a ) mx = b;
    else  mx = c;

     if(a<b && a<c ) mn = a;
    else if(b<c && b<a) mn = b;
    else  mn = c;
    if(a!=mx && a!=mn)printf("%d",a);
    else if( b!=mx && b!= mn)printf("%d",b);
    else printf("%d",c);
    return 0;
}