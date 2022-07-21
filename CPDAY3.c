#include<stdio.h>
int main(){

    printf("\n-------------------------- DAY 3 PROGRAMS ------------------------\n ");

    printf("Enter 1 for Subject Program\n");
    printf("Enter 2 for Postive or not\n ");
    printf("Enter 3 for Vowel Consonant Program\n");
    printf("Enter 4 for Triangle  Program\n");
    printf("Enter 5 for Week  Program\n");
    printf("Enter 6 for Leap year Program \n");
    printf("Enter 6 for Half Pyramid Program \n");

    printf("\n------------------------------------------------------------------");

    int option;
    printf("\n choose your Option: ");
    scanf("%d",&option);
    printf("------------------------------------------------------------------\n");
    int number;
    char ch;
    int s1,s2,s3;
    int week;
    int year;
    int i, j, n;

switch(option){

    case 1:
    printf("Sub.= Phy,Che,Bio,Maths,Comp \n");
    int phy,che,bio,maths,comp;
    int total,scored;
    float percentage;
    printf("enter total marks : ");
    scanf("\n%d",&total);
    printf("enter value of Subjects (in sequence) : \n");
    scanf("%d\n%d\n%d\n%d\n%d",&phy,&che,&bio,&maths,&comp);
    scored=phy+che+bio+maths+comp;
    percentage=scored*100/total;
    printf("Scored By student : %d",scored);
    printf("\nPercentage of student : %0.2lf \n",percentage);

    if(percentage=90.00&&percentage>90.00){
        printf("Grade = A+");
    }
    else if("percentage<90.00&&percentage>80.00"){
        printf("Grade = A");
    }
    else if("percentage<80.00&&percentage>60.00"){
        printf("Grade = B");
    }
    else if("percentage<60.00&&percentage>50.00"){
        printf("Grade = C");
    }
    else if("percentage<50.00&&percentage>40.00"){
        printf("Grade = D");
    }
    else{
        printf("you failed");
    }
    break;

    case 2:
    printf("enter the number :");
    scanf("%d",&number);

    if(number>0){
	
    printf("Entered %d is Positive",number);
           }
    else{
    printf("Entered %d is Negative",number);
    	}
    break;

    case 3:
   
    printf("enter only alphabets :");
    scanf("\n %c",&ch);

    switch(ch){
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
        printf("Entered alphabet is Vowel");
        break;
        default:
        printf("Emtered Alphabet is Consonant");
        }
    break;

    case 4:
     //sides
     printf("enter the sides of triangle s1 s2 and s3 : \n");
     scanf("%d %d %d",&s1,&s2,&s3);

     if(s1==s2&&s2==s3){
        printf("Triangle is Equilateral ( All Side Equal)");
     }
     else if(s1==s2||s2==s3||s1==s3){
        printf("Triangle is Isosceles ( only two Side Equal)");
     }
     else{
        printf("Triangle is scalene ( All Side unequal)");
     }
     break;

     case 5:

     
     //sunday =1;monday =2;tuesday=3;wednesday=4;thrusday=5;friday=6;saturday=7

     printf("enter the day of week : ");
     scanf("\n %d",&week);

     switch(week){
        case 1: printf("Sunday");
        break;
        case 2: printf("Monday");
        break;
        case 3: printf("Tuesday");
        break;
        case 4: printf("Wednesday");
        break;
        case 5: printf("Thrusday");
        break;
        case 6: printf("Friday");
        break;
        case 7: printf("Saturday");
        break;
        default:
        printf("you entered wrong input please put between (1-7)");
    }
     break;

     case 6:
 
     printf("Enter the Year :");
     scanf("\n %d",&year);

     if(year%4==0 && year%400==0 || year%100!=0) 
	 {
        printf("Year %d is Leap Year",year);
     }
     else{
        printf("Year %d is not Leap Year",year);
     }
     break;

     case 7:
     
    printf("Enter number of rows: ");
    scanf("%d",&n);
    
    for(i = 1; i <= n; i++)
{ 
      for(j = 1; j <= i; j++)
{
printf("* ");
}

printf("\n");
}

break;
default:
printf("Make sure You enter Correct Input !!!!!!!");

}
    return 0;
}