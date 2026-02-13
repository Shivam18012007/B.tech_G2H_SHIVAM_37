#include<stdio.h>
int main (){
    float maths,science,english,hindi,sanskrit;
    float sum;
    float percentage;

    printf("enter the marks of 5subject : \n ");
    scanf(" %f %f %f %f %f ", &maths,&science,&english,&hindi,&sanskrit);
     
    sum= maths + science + english + hindi + sanskrit;
    printf("the sum of following marks =%f",sum);
      
    percentage= (sum*100)/500;
    printf("your percentage is : %f/n",percentage);

    return 0;


}