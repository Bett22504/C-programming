//function in C program Electricity bill
/* Aurthor:Immanuel
Reg No.:CT101/G/22504/24*/
#include<stdio.h>
#include<math.h>
float calculate_charges(float units_consumed){
	if(units_consumed < 200){
		return 1.20 * units_consumed;
	}else if(units_consumed < 400){
		return 1 * units_consumed;
	}else if(units_consumed < 600){
		return 1.80 * units_consumed;
	}else{
		return 2.00 * units_consumed; 
		}
}
float calculate_surcharge(float total_bill){
	if(total_bill > 400){
		return total_bill * 0.15;
	}else{
		return 0;
	}
}
float calculate_final_bill(float total_bill,float surcharge){
	return total_bill + surcharge;
}
int main(){
	int customer_id;
	char customer_name[10];
	float units_consumed;
	float charge_per_unit;
	float total_bill;
	float surcharge;
	float final_bill;
	printf("Enter the custmer id:");
	scanf("%d",&customer_id);
	printf("Enter the customer name:");
	scanf("%s",customer_name);
	printf("Enter the units consumed:");
	scanf("%f",&units_consumed);
	
	charge_per_unit = calculate_charges(units_consumed);
	total_bill = charge_per_unit * units_consumed;
	printf("The bill is %.2f\n",total_bill);
	
	surcharge = calculate_surcharge(total_bill);
	final_bill = calculate_final_bill(total_bill,surcharge);
	
	printf("Customer id:%d\n",customer_id);
	printf("Customer name:%s\n",customer_name);
	printf("Charge per unit:Ksh.%.2f\n",charge_per_unit);
	printf("Total amount to pay:Ksh.%.2f\n",total_bill);
	printf("Surcharge:Ksh.%.2f\n",surcharge);
	printf("Final bill:Ksh.%.2f\n",final_bill);
	return 0;
}