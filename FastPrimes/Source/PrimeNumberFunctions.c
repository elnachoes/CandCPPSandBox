#include "FastPrimeTestHead.h"

int calculationLoop(int targetNthPrime)
{
    int knownPrimes[primesBuffer];
    knownPrimes[0] = 2;

    int targetPrime;

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

        unsigned int knownPrimesPosition = 1;

        while (i < targetNthPrime)
        {

            isPrime = checkIfPrime (currentNumber);

            if (isPrime)
            {
                i++;
                targetPrime = currentNumber;
                if(knownPrimesPosition < primesBuffer)
                {
                    knownPrimes[knownPrimesPosition] = currentNumber;
                    knownPrimesPosition++;
                }
            }
            //Incrementing by two skips all even numbers since currentNumber starts at 3
            currentNumber += 2;
        }
    }
    cachePrimesArray(knownPrimes);

    return targetPrime;
}

//Function that checks if the number you entered is prime or not
_Bool checkIfPrime (unsigned int number)
{
    if(number == 3 || number == 5 || number == 7 || number == 11)
    {
        return true;
    }
    else if(number % 3 == 0 || number % 5 == 0 || number % 7 == 0 || number % 11 == 0)
    {
        return false;
    }
    else
    {
        for(unsigned int divisor = 11; divisor <= sqrt(number); divisor++)
        {
            //If this is true the number is not prime and the function returns false
            if (number % divisor == 0)
            {
                return false;
            }
        }
        return true;
    }
}