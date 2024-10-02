//Program to determine Qualifications of A bank Loan
/*Aurthor : Immanuel
Reg no : CT101/G/22504/24*/
#include<stdio.h>

int main(){
int Age,income;

printf("Enter the Age: ");
scanf("%d", &Age);

printf("Enter the Annual Income: ");
scanf("%d", &income);
 
if (Age>=21 && income>=2100){
 printf("Congratulations you qualify for a loan\n");
} else {
printf("Unfortunately we are unable to offer you a loan at this time\n");
}
    return 0;
}