// slow
long slowPhi(long largeNum, long* primeFactors, long n_primeFactors){
    long result = 0;
    for (long i=1; i<largeNum; i++){
        long a = i;
        long b = largeNum;
        long temp;
        while (a != 0){
            temp = a;
            a = b % a;
            b = temp;
        }
        if (b == 1){
            result++;
        }
    }
    return result;
}
