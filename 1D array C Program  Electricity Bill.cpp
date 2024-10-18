
//C program using 1D array
/*
Aurthor:Immanuel Bett
Reg No:CT101/G/22504/24
*/
#include <stdio.h>
int main(){
	int customerID,unitsConsumed;
	char customerName[50];
	float totalAmount = 0,surcharge = 0;
	float unitCharges[]{5,7,10,15}; 
	int unitLimits[] = {50,100,200,300};	  
	//promt user to enter details
     printf("Enter customer ID:");
	scanf("%d",&customerID);
	printf("Enter units consumed :");
	scanf("%d",&unitsConsumed);
	printf("Enter customer name:");
	scanf("%s",customerName);
	for(int i = 0;i < 4;i++){
		if(unitsConsumed > unitLimits[i]){
			totalAmount += (unitsConsumed-unitLimits[i])*unitCharges[i];
			unitsConsumed = unitLimits[i];
		}
	}
	if(totalAmount < 100){
		totalAmount = 100;
	}
	if(totalAmount > 400){
		surcharge = 0.15*totalAmount;
	}
	//Outut the results
	printf("\nElectricity Bill:\n");
	printf("Customer ID :%d\n",customerID);
	printf("Customer Name :%s\n",customerName);
	printf("Units Consumed :%d\n",unitsConsumed);
	printf("Charges per unit :%.2f\n",unitCharges[0]);
	printf("Total Amount to pay is :%.2f(including surcharge:%2f\n")
	,totalAmount + surcharge,surcharge;
	return 0;
	}

