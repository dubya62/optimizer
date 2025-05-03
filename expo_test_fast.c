#include <stdio.h>
#include <time.h>

long fastPhi(long largeNum, long* primeFactors, long n_primeFactors);

int main(int argc, char** argv){
    long factors[] = {2, 2, 3, 5, 7, 23, 79, 109};
    long n_factors = 8;
    long largeNum = 1;
    for (long i=0; i<n_factors; i++){
        largeNum *= factors[i];
    }


    clock_t begin = clock();
    long result = fastPhi(largeNum, factors, n_factors);
    clock_t end = clock();

    printf("fast %ld: %ld\n", largeNum, result);
    printf("Time spent: %lf\n", (double)(end-begin)/CLOCKS_PER_SEC);

}




