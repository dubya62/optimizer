// fast
long fastPhi(long largeNum, long* primeFactors, long n_primeFactors){
    long result = 1;
    long lastNum = 1;
    long currentFactor = 1;
    for (long i=0; i<n_primeFactors; i++){
        if (primeFactors[i] != lastNum && lastNum != 1){
            long res = 0;
            for (long j=1; j<currentFactor; j++){
                long a = j;
                long b = currentFactor;
                long temp;
                while (a != 0){
                    temp = a;
                    a = b % a;
                    b = temp;
                }
                if (b == 1){
                    res++;
                }
            }
            result *= res;
            currentFactor = primeFactors[i];
        } else {
            currentFactor *= primeFactors[i];
        }
        lastNum = primeFactors[i];
    }
    long res = 0;
    for (long j=1; j<currentFactor; j++){
        long a = j;
        long b = currentFactor;
        long temp;
        while (a != 0){
            temp = a;
            a = b % a;
            b = temp;
        }
        if (b == 1){
            res++;
        }
    }
    result *= res;

    return result;
}
