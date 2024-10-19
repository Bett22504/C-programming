//C structures
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
strcpy(student1.name,"james");
strcpy(student1.reg_no,"CT101/G/22504/24");
student1.phone_no=1234567;
student1.height=5.8;
strcpy(student1.email,"kipronoimmanuel84@gmail.com");

printf("Name:%s\n",student1.name);
printf("Reg_no:%s\n",student1.reg_no);
printf("phone no:%d\n",student1.phone_no);
printf("Height:%.2f\n",student1.height);
printf("email:%s\n",student1.email);
return 0;
}
