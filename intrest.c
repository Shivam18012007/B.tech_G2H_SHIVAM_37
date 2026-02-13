#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t,si,ci,a;
    printf("enter principle:");
    scanf("%f",&p);
    printf("enter the rate of intrest");
    scanf("%f",&r);
    printf("enter the time period:");
    scanf("%f",&t);

    si=(p*r*t)/100 ;
    printf("the si of thr given principle amount will be:%f",si);
    a=p*(pow((1+r/100),t));
    ci=a-p;
    printf("\n compound intrest=%f",ci);

    return 0;
}