#include<stdio.h>
void main()
{
    int hindi,english,science,math,computer,sum;
    float per;
    printf("enter marks of hindi=");
    scanf("%d",&hindi);
    printf("enter marks of english");
    scanf("%d",&english);
    printf("enter matks of science");
    scanf("%d",&science);
    printf("enter marks of maths");
    scanf("%d",&math);
    printf("enter mark os computer");
    scanf("%d",&computer);

    sum=hindi+english+science+math+computer;
    printf("\nsum of marks=%d",sum);
     per=(float)sum/5;
     printf("\npercentage of marks=%f",per);

     if(per>90&&per<=100)
    { 
        printf("\ngrade A");
    }
    else if(per>80&&per<90)
    {
        printf("\ngrade B");
    }
    else if(per>70&&per<80)
    {
        printf("\ngrade C");
    }
    else if(per>60)
    {
        printf("\ngrade D");
    }

}

