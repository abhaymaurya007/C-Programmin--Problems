/*
Write a c program to find the next multiple of 10 of a given two digit number, if the given number's last digit is less than 5 then 

find the previous multiple of 10 and if the given number's last digit is greater than or equal to 5 then find the next multiple of 10.

[Dont use if else or ternary operator ]
*/
#include<stdio.h>
void main(){
   //showing massage to console window to enter digit
    printf("Enter Two Digit Number : ");
    //declare a variable two store variable
    int num;
    //Take input on console window from user
    scanf("%d",&num);
    //Logic to find multiple of 10
    int a=num%10;
    int b=(num/10)*10;
    int c=(num/10+1)*10;
    a<=5 && printf("%d",b);
    a>=6 && printf("%d",c); 
}