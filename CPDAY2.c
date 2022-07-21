#include<stdio.h>

int main(){

    int a; //choices
     printf("--------------------- Day 2 All Programs --------------------- \n");
     
     printf("Press 1 for Area of Square \n");
     printf("Press 2 for Area of Circle \n");
     printf("Press 3 for Divisor Program \n");
     printf("Press 4 for Assignment Operator Program \n");
     printf("Press 5 for Size of Operator and Datatype Program \n");
     printf("Press 6 for Swap Number Program \n");

     scanf("%d",&a); //choice input
     
     printf("------------------------------------------------------------ \n");

     if(a==1){ //area of Square
     	int r;
     	printf("Enter the Length or Radius (r) :");
        scanf("%d",&r);
        int areaofsqaure;
        areaofsqaure=r*r;
        printf("area of sqaure = %d",areaofsqaure);
     }
     else if (a==2){ // area of Circle
     	int r;
     	printf("Enter the Length or Radius (r) :");
        scanf("%d",&r);
        float areaofcircle;
        areaofcircle=3.14*r*r;
        printf("area of circle =%f",areaofcircle);
     }
     else if (a==3){  //divisor program
        int num1,num2,quotient,remainder;
        printf("enter value of dividend :");
        scanf("%d",&num1);
        printf("\nenter value of divisor :");
        scanf("%d",&num2);
        quotient=num1/num2;
        remainder=num1%num2;
        printf("quotient =%d \n",quotient);
        printf("remainder =%d \n",remainder);
     }

     else if(a==4){  // assignment Operator
        int a=10;
        int b=40;

        printf("value of += %d",b+=a);
        printf("value of -= %d",b-=a);
        printf("value of *= %d",b*=a);
        printf("value of /= %d",b/=a);
        printf("value of %= %d",b%=a);
     }

     else if(a==5){
              int a;
              printf("int datatype Size %d bytes\n",sizeof(int));
              printf("char datatype Size %d bytes\n ",sizeof(char));
              printf("float datatype Size %d bytes\n",sizeof(float));
              printf("Double datatype Size %d bytes\n",sizeof(double));
              printf("Long Double datatype Size %d bytes\n",sizeof(long double));
              
              int in=2;
              char ch='A';
              float f=2.33;
              
              printf("\n int  %d ",in);
              printf("\n char %c  ",ch);
              printf(" \n float %f",f);
              
     }
     else if(a==6){
     	
     	int n1;
     	int n2;
     	
     	printf("enter the value of a : \n ");
     	scanf("%d  %d",&n1,&n2);
     	
     	printf("before swapping a : %d \n",n1);
     	printf("before swapping b : %d \n ",n2);
     	
     	int temp=n1;
     	n1=n2;
     	n2=temp;
     	
     	printf("after swapping a : %d \n",n1);
     	printf("after swapping b : %d \n",n2);
     }
     		
     else{
        printf("you entered wrong input");
     }
     return 0;
}