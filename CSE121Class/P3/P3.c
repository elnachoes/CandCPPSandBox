//This is a loan calculator for taking out a loan to buy a house
#include <stdio.h>

int main(void){
    //user loan information variables
    int userLoanYears;
    double userLoanAmount;
    double userLoanAnnualIntrestRate;
    double userMonthlyPayment;
    double userLoanBalance;
    double userTotalInterest;

    //monthly loan information variables
    double monthlyIntrest;
    double monthlyLeftOverPayment;

    //getting user input
    printf("\nLoan amount? : ");
    scanf("%lf", &userLoanAmount);
    printf("\nHow many years is your loan? : ");
    scanf("%i", &userLoanYears);
    printf("\nAnnual intrest rate in percent? : ");
    scanf("%lf", &userLoanAnnualIntrestRate);
    printf("\nMonthly payment? : ");
    scanf("%lf", &userMonthlyPayment);

    //setting userLoanBalance to the userLoanAmount
    userLoanBalance = userLoanAmount;
    
    //for loop that calculates the monthly interest,total interest, leftover payment and the user loan balance each month 
    for(int month = 1; month <= userLoanYears * 12; month++){

        monthlyIntrest = ((userLoanAnnualIntrestRate/100)/12) * userLoanBalance;
        userTotalInterest += monthlyIntrest;
        monthlyLeftOverPayment = userMonthlyPayment - monthlyIntrest;
        userLoanBalance -= monthlyLeftOverPayment;
        
        //printing the month, interest, left over payment and balance each month
        printf("\nMonth (%3i), interest = %7.2f, left over payment = %7.2f, balance = %7.2f",month,monthlyIntrest,monthlyLeftOverPayment, userLoanBalance);
    }

    //printing the total interest accrued over the life of the loan and the final balance
    printf("\nTotal Interest = %7.2f, Final Balance = %7.2f",userTotalInterest,userLoanBalance);

    return 0;
}