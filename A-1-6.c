#include<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    printf("%d\n",c);
    int x = (int)c;
    if(x == 90 || x== 122) x = x -25;
    else 
    x = x+ 1;
    printf("%c",x);
    return 0;
}