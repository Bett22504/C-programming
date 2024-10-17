//C program using 2D array
/*
Aurthor:Immanuel Bett
Reg No:CT101/G/22504/24
*/
#include <stdio.h>
int main(){
	int customerID,unitsConsumed,totalAmount = 0;
	char customerName[50];
	int unitLimits[] = {50,100,200};
	float unitCharges[] = {5,7,10,25},surcharge = 0;
	int i;
	//promt user to enter details
    printf("Enter customerID:");
	scanf("%d",&customerID);
	printf("Enter units consumed :");
	scanf("%d",&unitsConsumed);
	printf("Enter customer name:");
	scanf("%s",customerName);
	//calculate the total amount
	for(i=0;i<3;i++){
		if(unitsConsumed > unitLimits[i]){
			totalAmount += (unitLimits[i])*unitCharges[i];
			unitsConsumed -= unitLimits[i];
		}else{
			totalAmount += (unitsConsumed*unitCharges[i]);
			break;
		}
	}
	if(totalAmount < 100){
		totalAmount = 100;
		surcharge = 0.15*totalAmount;
	}else if(totalAmount > 400){
		printf("\nElectricity Bill : \n");
	}
	//Outut the results
	printf("\nElectricity Bill:\n");
	printf("Customer ID :%d\n",customerID);
	printf("Customer Name :%s\n",customerName);
	printf("Units Consumed :%d\n",unitsConsumed);
	printf("Charges per unit :%.2f\n",unitCharges[0]);
	printf("Total Amount to pay is :%.2f(including surcharge:%2f\n"),totalAmount + surcharge,surcharge;
	return 0;
	}