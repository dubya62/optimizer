// Given a large number and an array of its prime factors, 
// find the number of prime numbers less than that number

#include <stdio.h>
#include <time.h>

long gcd(long a, long b){
    if (a == 0){
        return b;
    }
    return gcd(b % a, a);
}

int isrelprime(long x, long y) {
    return gcd(x, y) == 1;
}

// slow
long slowPhi(long largeNum, long* primeFactors, long n_primeFactors){
    long result = 0;
    for (long i=1; i<largeNum; i++){
        if (isrelprime(i, largeNum)){
            result++;
        }
    }
    return result;
}

// fast
long fastPhi(long largeNum, long* primeFactors, long n_primeFactors){
    long result = 1;
    long lastNum = 1;
    long currentFactor = 1;
    for (long i=0; i<n_primeFactors; i++){
        if (primeFactors[i] != lastNum && lastNum != 1){
            printf("Slowphi (%ld) \n", currentFactor);
            result *= slowPhi(currentFactor, NULL, 0);
            printf("result = %ld\n", result);
            currentFactor = primeFactors[i];
        } else {
            currentFactor *= primeFactors[i];
        }
        lastNum = primeFactors[i];
    }
    printf("%ld\n", currentFactor);
    result *= slowPhi(currentFactor, NULL, 0);

    printf("%ld: %ld\n", largeNum, result);

    return result;
}



int main(int argc, char** argv){
    long factors[] = {2, 2, 3, 5, 7, 19, 17, 23, 109};
    long n_factors = 9;
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

    printf("slow %ld: %ld\n", largeNum, result2);
    printf("Time spent: %lf\n", (double)(end1-begin1)/CLOCKS_PER_SEC);
    printf("fast %ld: %ld\n", largeNum, result);
    printf("Time spent: %lf\n", (double)(end2-begin2)/CLOCKS_PER_SEC);

}




