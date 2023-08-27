#include<stdio.h>
int main()
{
    printf("1. Circle \n2. Square \n3. Rectangle \n");
    int x; scanf("%d",&x );
    if(x==1 )
    {
        float r ;
        printf("Enter the radius \n");
        scanf("%f",&r);
        printf("Area is %.2f \nVolume is %.2f \nPerimeter is %.2f \n",3.1316*r*r, (4/3)*r*r*r*3.1416, 2*3.1416*r);
    }
    else if(x==2)
    {
        int a ; 
        printf("Enter a side \n");
        scanf("%d",&a);
        printf("Area is %d \nVolume is %d \nPerimeter is %d\n",a*a, a*a*a, 4*a);
    }
    else 
    {
    printf("Enter length , width and height \n");
    int a,b,c; scanf("%d%d%d",&a,&b,&c);
    printf("The area is %d \nVolume is %d \nPerimeter is %d  ",a*b, a*b*c, 2*(a+b));
    }
    return 0;
}