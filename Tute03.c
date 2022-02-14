/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {//function main begins the program
  int n, sum = 0;//define variables
  
  printf("Enter the number:");//prompt
  scanf("%d", &n);//read variables
  
  for(int i=1; i<=n ;i++){//get the sum of numbers from1 to n
    sum += i;//calculation
  }
  
  printf("\nSum = %d ",sum);// display the answer
  
  return 0;//end of the main function
}

