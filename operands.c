#include<stdio.h>
int main()
{
    int firstnum,secondnum,result;
    char op;

    printf("enter the first number");
    scanf("%d",&firstnum);
    printf("enter the second number");
    scanf("%d",&secondnum);
    printf("enter the operator");
    scanf(" % c ",&op);

    switch(op){
    case'-':
    result=firstnum-secondnum;
    printf("subtraction is:%d",result);
    break;

    case'+':
    result=firstnum+secondnum;
    printf("addition is:%d",result);
    break;

    case'*':
    result=firstnum*secondnum;
    printf("multiplication is:%d",result);
    break;

    case'/':
    result=firstnum/secondnum;
    printf("division is:%d",result);
    break;
    
    default:
    printf("oops! wrong choice");
    }
    return 0;






}