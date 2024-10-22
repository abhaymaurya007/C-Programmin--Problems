/** 
 Write a C program to calculate and 
 print the area of  rectangle.
 Length and breadth of rectanngle is : 4 , 5
 */
#include<stdio.h>
void main(){
    //Declare input according to datatype
    float LengthOfReactangle=4;
    float WidthOfReactangle=5;
    //formila to find area of rectangle
    float AreaOfRectangle=LengthOfReactangle*WidthOfReactangle;
    //print the output
    printf("%.2f\n",AreaOfRectangle);
}