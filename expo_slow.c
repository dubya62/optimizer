
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




