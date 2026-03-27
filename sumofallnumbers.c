#include<stdio.h>
int main()
{
    int n,sum=0,c,value;
    printf("how many numbers you want to add?\n");
    scanf("%d",&n);

    printf("enter %d integers\n",n);
    for(c=1;c<=n;c++)
    {
        scanf("%d",&value);
        sum+=value;
    }
    printf("sum of the integers=%d\n",sum);
    return 0;
}