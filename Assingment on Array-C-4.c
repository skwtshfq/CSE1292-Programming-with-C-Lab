#include<stdio.h>
int main()
{
    printf("The number of elements to be stored in the array : ");
    int n;
    scanf("%d",&n);
    int arr[n];
    int freq[99999]={0};
    for( int i = 0;i<n;i++)
    {

        printf("Element-%d :",i+1);
        scanf("%d",&arr[i]);
        freq[arr[i]]++;
    }
    int ans = 0;
    for(int i = 0;i<n;i++)
    {

        if(freq[arr[i]]==2)ans++,freq[arr[i]]=0;
    }
    printf("Total number of duplicate elemenst found in the array is : %d",ans);
    return 0;
}
