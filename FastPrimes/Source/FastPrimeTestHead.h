#include <stdio.h>
#include <time.h>
#include <math.h>
#include <conio.h>

#define false 0
#define true 1

#define primesBuffer 100000

_Bool checkIfPrime (unsigned int);

void cachePrimesArray(int knownPrimes[]);
int * loadPrimes();
