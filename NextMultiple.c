// Write a c program to find the next multiple of 10 of a given two digit number
#include<stdio.h>
void main(){
    //declare input data according to
     int num=58;
     //logic to find next multiple 
    if(num>9){
   int result=num+(10-num%10);
  // print result
    printf("%d",result);
    }
}