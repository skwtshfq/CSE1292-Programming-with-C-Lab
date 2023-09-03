#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
     float sum = 0;
    for( int i = 0;i<n;i++)printf("Enter number %d : ",i+1), scanf("%d",&arr[i]),sum+=arr[i];
    printf("Average =  %.2f",sum/n);
    return 0;
}

