#include<stdio.h>
void main(){
    //declare variable
    int num;
    //showing massage to user enter 3 digit number
    printf("Enter three digit number :");
    // take input from console window
    scanf("%d",&num);
    //logic and print output
    printf("%d",((num/100)+(num%10)));
}