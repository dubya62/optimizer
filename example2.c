#include <time.h>
#include <stdio.h>

long slowPhi(long largeNum, long* primeFactors, long n_primeFactors);
long fastPhi(long largeNum, long* primeFactors, long n_primeFactors);

int main(int argc, char** argv){
    long factors[] = {2, 2, 3, 5, 7, 109};
    long n_factors = 6;
    long largeNum = 1;
    for (long i=0; i<n_factors; i++){
        largeNum *= factors[i];
    }


    clock_t begin1 = clock();
    long result = fastPhi(largeNum, factors, n_factors);
    clock_t end1 = clock();
    clock_t begin2 = clock();
    long result2 = slowPhi(largeNum, factors, n_factors);
    clock_t end2 = clock();

    printf("fast %ld: %ld\n", largeNum, result2);
    printf("Time spent: %lf\n", (double)(end1-begin1)/CLOCKS_PER_SEC);
    printf("slow %ld: %ld\n", largeNum, result);
    printf("Time spent: %lf\n", (double)(end2-begin2)/CLOCKS_PER_SEC);

}




