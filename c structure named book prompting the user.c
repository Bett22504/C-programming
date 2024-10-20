//C program to define a structure named book
/*Aurthor:Immanuel Bett
Reg no:CT101/G/22504*/
#include <stdio.h>
#include <string.h>
struct book{
char title[30];
char aurthor[30];
int publication_year;
char ISBN[13];
float price;
}book;

int main(){
printf("Enter the title:");
scanf("%s",&book.title);
printf("Enter the aurthor:");
scanf("%s",&book.aurthor);
printf("Enter the publication year:");
scanf("%d",&book.publication_year);
printf("Enter the ISBN:");
scanf("%s",&book.ISBN);
printf("Enter the price:");
scanf("%f",&book.price);

printf("Title:%s\n",book.title);
printf("Aurthor:%s\n",book.aurthor);
printf("Publication year:%d\n",book.publication_year);
printf("ISBN:%s\n",book.ISBN);
printf("Price:%.2f\n",book.price);

return 0;
}