#include <stdio.h>

int main() {
    int age, income, bookID, dueDate, returnDate, daysOverdue, fineRate, fineAmount,i;

    // Loan eligibility check
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your annual income: ");
    scanf("%d", &income);

    if (age >= 21 && income >= 21000) {
        printf("Congratulations! You qualify for a loan.\n");
    } else {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }

    // Library fine calculation
    printf("\nEnter Book ID: ");
    scanf("%d", &bookID);

    printf("Enter Due Date: ");
    scanf("%d", &dueDate);

    printf("Enter Return Date: ");
    scanf("%d", &returnDate);

    daysOverdue = returnDate - dueDate;

    // Define a 3D array for fine rates
    int fineRates[3][2] = {
        {0, 20},
        {8, 50},
        {15, 100}
    };

    // Determine the fine rate using the 3D array
    for (i = 0; i < 3; i++) {
        if (daysOverdue <= fineRates[i][0]) {
            fineRate = fineRates[i][1];
            break;
        }
    }

    fineAmount = daysOverdue * fineRate;

    // Display the results
    printf("\nBook ID: %d\n", bookID);
    printf("Due Date: %d\n", dueDate);
    printf("Return Date: %d\n", returnDate);
    printf("Days Overdue: %d\n", daysOverdue);
    printf("Fine Rate: %d\n", fineRate);
    printf("Fine Amount: %d\n", fineAmount);

    return 0;
}
