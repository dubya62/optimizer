#ifndef NULL
#define NULL ((void*)0)
#endif

long gcd(long a, long b){
    if (a == 0){
        return b;
    }
    return gcd(b % a, a);
}

int isrelprime(long x, long y) {
    return gcd(x, y) == 1;
}

long slowPhi(long largeNum, long* primeFactors, long n_primeFactors){
    long result = 0;
    for (long i=1; i<largeNum; i++){
        if (isrelprime(i, largeNum)){
            result++;
        }
    }
    return result;
}

long fastPhi(long largeNum, long* primeFactors, long n_primeFactors){
    long result = 1;
    long lastNum = 1;
    long currentFactor = 1;
    for (long i=0; i<n_primeFactors; i++){
        if (primeFactors[i] != lastNum && lastNum != 1){
            result *= slowPhi(currentFactor, NULL, 0);
            currentFactor = primeFactors[i];
        } else {
            currentFactor *= primeFactors[i];
        }
        lastNum = primeFactors[i];
    }
    result *= slowPhi(currentFactor, NULL, 0);

    return result;
}
