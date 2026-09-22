#include <stdio.h>

int main()
{
    double loan, originalLoan, percent, monthlyPayment, yearlyInterest, totalPay = 0, FirstYearly, FirstMonthly;
    int year;

    printf("Enter loan : ");
    scanf("%lf", &loan);
    originalLoan = loan;

    printf("Enter percent of loan : ");
    scanf("%lf", &percent);
    FirstYearly = loan * percent / 100.0;
    FirstMonthly = FirstYearly / 12.0;
    
    printf("\nFirst Year [Year | Month] : %.2lf | %.2lf\n", FirstYearly, FirstMonthly);
    printf("Monthly Payment : ");
    scanf("%lf", &monthlyPayment);

    for (year = 1; loan > 0; year++) {
        yearlyInterest = loan * percent / 100.0;
        loan += yearlyInterest;
        if (loan > monthlyPayment * 12) {
            loan -= monthlyPayment * 12;
            totalPay += monthlyPayment * 12;
        }
        else {
            totalPay += loan;
            loan = 0;
        }
    }
    printf("\nYears : %d\n", year-1);
    printf("Money (percent of loan) : %.2lf\n", totalPay - originalLoan);

    return 0;
}