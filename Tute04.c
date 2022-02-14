/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

int minimum(int no1, int no2){//find out the minimum
   if(no1>no2)
      return no2;
   else 
      return no1;
}
int maximum(int no1, int no2){//discover the maximum
   if(no1>no2)
      return no1;
   else 
      return no2;
}
int multiply(int no1, int no2){//calculate the multiply
   return no1*no2;
}

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");//prompt
   scanf("%d", &no1);//read no1
   printf("Enter a value for no 2 : ");//prompt
   scanf("%d", &no2);//read no2
   printf("Minimum  =%d \n", minimum(no1, no2));//display minimum
   printf("Maximum  =%d \n", maximum(no1, no2));//display maximum
   printf("Multiply =%d ", multiply(no1, no2));//display multiply
   return 0;//end of the main function
}
