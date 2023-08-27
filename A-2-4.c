#include<stdio.h>
int main()
{
    int n,j;
    scanf("%d%d",&n,&j);
    for( int i =1;i<j;i++)
    {
        n = n/10;
    }
    if(n!=0)
    printf("%d",n%10);
    else
    printf("Sorry, the digit does not exist\n");
    return 0;
}