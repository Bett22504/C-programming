/*Program to calculate library finerate and amount 
Author;Immanuel Bett
Reg:CT101/G/22504/24*/
#include<stdio.h>

int main()
{
int bookid,duedate,returndate,daysoverdue,finerate,totalfine;
    printf("Enter The Book ID: ");
    scanf("%d", &bookid);   
    printf("Enter The Due date: ");
    scanf("%d", &duedate);  
    printf("Enter the Return Date: ");
    scanf("%d", &returndate);  
daysoverdue=returndate-duedate;
    if (daysoverdue <=7){
    finerate=20;
}    else if (daysoverdue <=14){
    finerate=50;
}    else if (daysoverdue >=15){
    finerate=100;
}
totalfine=daysoverdue*finerate;
    printf("Book ID:%d\n", bookid);
    printf("Due Date:%d\n", duedate);
    printf("Return Date:%d\n", returndate);
    printf("Days Overdue:%d\n", daysoverdue);
    printf("Finerate:%dKsh per day\n", finerate);
    printf("Fine Amount:%dKsh\n", totalfine);
    return 0;
}
