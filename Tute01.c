/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   int mark1, mark2;//define variables 
   float avg;
   
   printf("Enter Mark1:");//prompt
   scanf("%d",&mark1);//read mark 1
   
  printf("Enter Mark2:");//prompt
   scanf("%d",&mark2);//read mark 1
   
   avg = (mark1+mark2)/2.0;//calculate average
   
   printf("Average = %.2f",avg);//display avg
   
  return 0;
}

