//program to calculatethe electricity billfor a customer
/* 
Aurthor : Immanuel Bett
Reg no : CT101/G/22504/24
*/
#include <stdio.h>
int main(){
	int customerID,unitsConsumed;
	char customerName[50];
	float chargePerUnit,totalAmount,surcharge=0;
	//prompt the userto enter customer ID,customerName and nits used
	
	printf("Enter the units consumed :");
	scanf("%d",&unitsConsumed);
    printf("Enter the customer name :");
	scanf("%s",&customerName);
	//use if-else statements to check the conditions and apply the necessary calculations
	 if(unitsConsumed <= 199){
	 chargePerUnit = 1.20; }
	 else if (unitsConsumed >=200 && unitsConsumed <400){
		 chargePerUnit =1.50;
		 }else if (unitsConsumed >= 400 && unitsConsumed < 600 ){
		 	chargePerUnit = 1.80;
		 }else{
		 	chargePerUnit = 2.00;
		 }
		 //calculate the total bill
		 totalAmount = unitsConsumed *chargePerUnit;
		 //surcharge if the bill exceeds Kshs.400
		 if(totalAmount > 400){
         surcharge = totalAmount * 0.15;
		 }
		 //output display
		 printf("Electricity Bill\n");
		 printf("customer ID :%d\n",customerID);
		 printf("customer Name :%s\n",customerName);
		 printf("units consumed :%d\n",unitsConsumed);
		 printf("charge per unit :%.2f Kshs\n",chargePerUnit);
		 printf("Total Amount to pay :%.2f Kshs\n",totalAmount);
		 return 0;
}
		 
		 