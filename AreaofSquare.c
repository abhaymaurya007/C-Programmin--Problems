/**
 Write a C program to calculate and print the area of a square and rectangle.

Side of square is : 5
 */
#include<stdio.h>
void main(){
    //Declare and intialize Side Of Square as float because its need precision
    float SideOfSquare=5;
    //Logic for find area of Square using formula
    float AreaOfSquare=SideOfSquare*SideOfSquare;
    //print the output 
    printf("%.2f",AreaOfSquare);
    
}