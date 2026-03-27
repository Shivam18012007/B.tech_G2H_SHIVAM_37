#include <stdio.h>
int main (){
    int  n, i;
    printf("ENTER THE NUMBER OF ELEMENT");
    scanf("%d", &n);
    int arr[n];
    printf(" ENTER %d elements\n ", n);
    for(i=0; i<n;i++){
        scanf("%d", &arr[i]);
    }
    int max=arr[0];
    int min= arr[0];
    for(i=1; i<n;i++){
        if (arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("MAXIMUM ELEMENT =%d\n", max);
      printf("MiniMUM ELEMENT =%d\n", min);
}