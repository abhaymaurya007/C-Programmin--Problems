#include<stdio.h>
void main(){
    //Declaration and inilization of variavle
    int num=56;
    //logic to find sum
    int First_Digit=num/10;
    int Last_Digit=num%10;
    int Sum=First_Digit+Last_Digit;
    //print sum of the two digit unteger
    printf("%d of sum is :%d",num,Sum);

}