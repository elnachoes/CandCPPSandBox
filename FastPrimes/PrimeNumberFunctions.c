#include "FastPrimeTestHead.h"

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