int pow(int x, int n) {
    int result = 1;
    while (n > 0) {
        if (n & 1){
            result *= x;
        }
        x *= x;
        n >>= 1;
    }
    return result;
}
