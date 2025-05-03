
#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(int argc, char** argv){
    int c = gcd(40, 16);
    printf("%d\n", c);
}
