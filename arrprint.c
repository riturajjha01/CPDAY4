#include<stdio.h>

int main(){

    int arr[5];
    int i;
    
    printf("Enter the value :");
    
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }

    printf("You entered :\n");

    for(i=0;i<5;i++){
        printf("%d\n",arr[i]);
    }

    return 0;
}