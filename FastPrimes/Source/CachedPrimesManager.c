#include "FastPrimeTestHead.h"

void cachePrimesArray(int knownPrimes[])
{
    FILE *fpOut = fopen("PrimesCache.bin","w");
    // fwrite(knownPrimes,1,knownPrimes,fpOut);
    fclose(fpOut);

}