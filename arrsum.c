// Reverse array Program

#include<stdio.h>

int main(){

    int arr[5],i,sum=0;
    
    
    printf("Enter the value :");
    
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }

    printf("You entered :\n");

    for(i=0;i<5;i++){   //index value start from 4
        printf("%d \n",arr[i]);
        sum=sum+arr[i];
    }
    printf("The sum of array : %d",sum);

    return 0;
}