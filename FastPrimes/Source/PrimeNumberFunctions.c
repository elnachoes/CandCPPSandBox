#include "FastPrimeTestHead.h"

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