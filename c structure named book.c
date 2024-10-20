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
strcpy(book.title,"Introduction_to_C_programing");
strcpy(book.aurthor,"John_Smith");
book.publication_year=2022;
strcpy(book.ISBN,"9780131103627");
book.price=49.99;

printf("Title:%s\n",book.title);
printf("Aurthor:%s\n",book.aurthor);
printf("Publication year:%d\n",book.publication_year);
printf("ISBN:%s\n",book.ISBN);
printf("Price:%s\n",book.price);

return 0;
}