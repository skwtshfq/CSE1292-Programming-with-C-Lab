#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[100];
    int cnt = 0;
    while(n)
    {
        arr[cnt]= n%10;
        n /= 10;
        cnt++;
    }
    


    for(int i = 0;i<(cnt/2);i++)
    {
        int x = arr[i];
        arr[i]= arr[cnt-1-i];
        arr[cnt-1-i] = x;
    }


    int i , j;
    for( i  = cnt -1;i>0;i--)
    {
        if(arr[i]>arr[i-1])
        break;
    }

    if(i==0)
    {
        printf("Doesn't exist \n");
        return 0;
    }


    int x = arr[i-1];
    int sml = i;
    for(j = i+1;j<cnt;j++)
    {
        if(arr[j]>x && arr[j]<arr[sml])
        sml = j;
    }

    int t = arr[i-1];
    arr[i-1]= arr[sml];
    arr[sml]= t;

    for( int a= i;a<cnt;a++)
    {
        for(int b = a+1;b<cnt ; b++)
        {
            if(arr[a]>arr[b])
            {
                int w= arr[a];
                arr[a] = arr[b];
                arr[b]= w;
            }
        }
    }

    for(int i = 0;i<cnt;i++)printf("%d",arr[i]);

    return 0;
}