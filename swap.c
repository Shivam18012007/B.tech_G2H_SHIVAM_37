#include<stdio.h>
void main()
{
    int a,b,temp;
    printf("enter a=");
    scanf("%d",&a);
    printf("enter b=");
    scanf("%d",&b);

    temp=a;
    a=b;
    b=temp;
    printf("\nafter swapping");
    printf("\na=%d",a);
    printf("\nb=%d",b);
}