//including the standard input and output header file
#include "FastPrimeTestHead.h"

//Main Function
int main(void)
{
    int targetNthPrime;
    int targetPrime;
    time_t startTime, finishTime;

    //Getting user input to find the prime number of the position given
    printf("\nenter a number to find the nth position prime number : ");
    scanf("%i",&targetNthPrime);
    printf("\nplease wait while the %i position prime number is calculated...\n", targetNthPrime);

    startTime = time(NULL);


    targetPrime = calculationLoop(targetNthPrime);

    //Printing to the user the prime number they requested

    finishTime = time(NULL);

    printf("\nthe %i position prime number is %i\n",targetNthPrime, targetPrime);
    printf("\ncalculation time : %.2f seconds\n",difftime(finishTime,startTime));
    printf("press enter to close...");

    return 0;
}

