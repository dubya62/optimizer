
#include <stdio.h>

long fastPhi(long largeNum, long* primeFactors, long n_primeFactors);

int main(void){
    long factors[] = {2, 3};
    long n_factors = 2;

    long input = 1;
    for (int i=0; i<n_factors; i++){
        input *= factors[i];
    }

    long result = fastPhi(input, factors, n_factors);

    printf("slowPhi(%ld) = %ld\n", input, result);

    return 0;
}
