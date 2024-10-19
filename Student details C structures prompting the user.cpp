//C structure
/*Aurthor:Immanuel Bett
Reg no:CT101/G/22504/24*/
#include <stdio.h>
#include <string.h>
struct student{
char name[50];
char reg_no[16];
int phone_no;
float height;
char email[8];
}student1;
int main(){
printf("Enter your name:");
scanf("%s",&student1.name);
printf("Enter your reg_no:");
scanf("%s",&student1.reg_no);
printf("Enter your phone number:");
scanf("%d",&student1.phone_no);
printf("Enter your height:");
scanf("%f",&student1.height);
printf("Enter your email:");
scanf("%s",&student1.email);

printf("Name:%s\n",student1.name);
printf("Reg_no:%s\n",student1.reg_no);
printf("phone no:%d\n",student1.phone_no);
printf("Height:%.2f\n",student1.height);
printf("email:%s\n",student1.email);
return 0;
}