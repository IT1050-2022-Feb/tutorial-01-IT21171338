/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {//function main begins the programme
 float distance, amount;//define variables
  
  printf("Distance  ->");//prompt
  scanf("%f",& distance);//read distance
  
  if(distance<=30.00){//calculate distance if it is less than or equal to 30
    amount = distance*50.00;//calculate
  }
   if(distance>30.00){//calculate distance if it is greater than 30
     amount = (30*50)+((distance-30)*40.00);//calculate
   }
  printf("Amount = Rs.%.2f",amount);//display the amount should be paid
  
  return 0;//function main execute the programme
}

