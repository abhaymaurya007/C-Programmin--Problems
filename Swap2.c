/**Swaping two integer values  using third variable */
#include<stdio.h>
void main(){
    //Declartion and initilization of integers
    int First_Value=56,Second_value=67;
    printf("First value  is : %d\n",First_Value);
   printf("Second value is : %d\n",Second_value);
   //Logic to Swap the value of integer
    First_Value=First_Value+Second_value;
   Second_value=First_Value-Second_value;
    First_Value=First_Value-Second_value;
    //Print Swapped values in sequence
   printf("First value  is : %d\n",First_Value);
   printf("Second value is : %d\n",Second_value);
}