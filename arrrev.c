// Reverse array Program

#include<stdio.h>

int main(){

    int arr[5];
    int i;
    
    printf("Enter the value :");
    
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }

    printf("Reversed Array :\n");

    for(i=4;i>=0;i--){   //index value start from 4
        printf("%d \n",arr[i]);
    }

    return 0;
}