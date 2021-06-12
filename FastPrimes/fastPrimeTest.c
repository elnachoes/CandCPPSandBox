//including the standard input and output header file
#include <stdio.h>
#include <stdlib.h>
// #include <string.h>
#include <time.h>
#include <math.h>

//defining true and false for boolean variables
#define false 0
#define true 1

#define primesBuffer 100000

//prototype for the checkIfPrime Function
_Bool checkIfPrimeCandidate(int currentNumber, int *array);
_Bool checkIfPrime (unsigned int);

//Main Function
int main (void) 
{
    int knownPrimes[primesBuffer];

    // knownPrimes = (int *)malloc(primesBuffer);

    // memset(knownPrimes,0,primesBuffer);

    //two variables for tracking the target prime number and its position
    unsigned int targetNthPrime;
    unsigned int targetPrime;

    //Getting user input to find the prime number of the position given
    printf("\nenter a number to find the nth position prime number : ");
    scanf("%i",&targetNthPrime);
    printf("\nplease wait while the %i position prime number is calculated...\n", targetNthPrime);
    unsigned int timeStarted = time(0); 

    //this if statement executes if the user enters a 1 because 2 is the only even prime
    if (targetNthPrime == 1)
    {
        targetPrime = 2;
    }

    //This statement executes if the user inputs any number other than 1
    //This loop skips all even numbers by starting at 3 and incrementing currentNumber by 2
    //This is much faster at finding the target prime than incrementing by 1 which includes even numbers
    else
    {
        //Variables for tracking the current itteration of the while loop and the current number 
        unsigned int currentNumber = 3;
        unsigned int i = 1;

        //Boolean variable for tracking if the current number is prime
        _Bool isPrimeCandidate;
        _Bool isPrime;

        int knownPrimesPosition = 1;
        knownPrimes[knownPrimesPosition] = currentNumber;

        while (i < targetNthPrime) 
        {

            isPrimeCandidate = checkIfPrimeCandidate(currentNumber, knownPrimes);

            if(!isPrimeCandidate)
            {
                i++;
                targetPrime = currentNumber;
                currentNumber += 2;
                continue;
            }

            isPrime = checkIfPrime (currentNumber); 
            
            if (isPrime) 
            {
                i++;
                targetPrime = currentNumber;
                if(knownPrimesPosition < primesBuffer)
                {
                knownPrimesPosition++;
                knownPrimes[knownPrimesPosition] = currentNumber;
                }
            }
            currentNumber += 2;

            //Incrementing by two skips all even numbers since currentNumber starts at 3
        }
    }

    //Printing to the user the prime number they requested
    unsigned int timeFinished = time(0);
    long double secondsElapsed = ((double)timeFinished - (double)timeStarted);
    printf("\nthe %i position prime number is %i\n",targetNthPrime, targetPrime);
    printf("\nthis took %f seconds\n",secondsElapsed);

    return 0;
}

_Bool checkIfPrimeCandidate(int currentNumber, int *array)
{
    int *i = array;

    for(int j = 0; j != 0; j++)
    {
        if(j % *i == 0)
        {
            return false;
        }
    }
    return true;
    // return false;
}


//Function that checks if the number you entered is prime or not
_Bool checkIfPrime (unsigned int number) 
{
    for(unsigned int divisor = 3; divisor <= sqrt(number); divisor++)
    {
        
        //If this is true the number is not prime and the function returns false
        if (number % divisor == 0)
        {
            return false;
        }

    }
    return true;
}
