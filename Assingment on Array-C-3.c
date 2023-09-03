#include<stdio.h>
int main()
{

    int n ;
    printf("The number of elements to be stored in the array : ");
    scanf("%d",&n);
    int arr[n];
    int mx = -99999;
    int mn = 9999999;
    for( int i  = 0;i<n;i++)
    printf("Element-%d : ",i+1),scanf("%d",&arr[i]);
    for( int i = 0;i<n;i++)
    {

        if(arr[i]>mx)mx= arr[i];
        if(arr[i]<mn)mn = arr[i];
    }
    printf("Maximum element is : %d\n",mx);
    printf("Minimum element is : %d\n",mn);
    return 0;
}
