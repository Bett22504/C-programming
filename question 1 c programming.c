/*Program to calculate simple interest
Author: Immanuel Bett
Reg:CT101/G/22504/24*/
#include <stdio.h>
int main() {

  int principal,rate,time,simple_interest;

  printf("Enter the principal amount: ");
  scanf("%d", &principal);

  printf("Enter the rate in percent: ");
  scanf("%d", &rate);

  printf("Enter the Time in Years: ");
  scanf("%d", &time);

  simple_interest=(principal*rate*time)/100;
  
  printf("simple interest is:%d Ksh", simple_interest);
  return 0;
}
