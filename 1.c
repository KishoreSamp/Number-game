#include<stdio.h>
void main()
{
    int num;
    printf("welcome to our number game:\n");
     printf("hint 1:number between 1 to 100\n");
        printf("enter the num:\n");
        scanf("%d",&num);

    while(5){
           if(num==56){
        printf("**you got it**\n");
     printf("your score is 5\n\n");
     printf("*****you won the game*****\n");
     break;
     }
     printf("you scored ='1'\n\n");
      printf("Hint 2:number end with even num\n");

       if(num%2==0){
            printf("your number is even\n");}
        else if(num%2!=0) {
        printf("your number is odd\nenter even number\n");}
            printf("you scored='2'\n\n");
        printf("hint 3:number of first digit odd\n");
        printf("enter the num:\n");
        scanf("%d",&num);

     if(num%7==0){
    printf("number is div by 7\n");}
    else if(num%7!=0){
        printf("number is not div by 7\n");}

    printf("you scored='3'\n\n");
    printf("Hint 4:number between 50 to 60\n");
    printf("enter the num:\n");
    scanf("%d",&num);

     if(num%8==0){
        printf("number is also div by 8\n");}
     else if(num%8!=0){
        printf("number is not by 8\n");

     printf("you scored='4'\n\n");
     printf("Hint 5: number end with 6\n");
     printf("enter the num:\n");
     scanf("%d",&num);}
          else {
        printf("you lose the game\n");}


}}
