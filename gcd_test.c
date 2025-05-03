
#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(int argc, char** argv){
    int c = gcd(atoi(argv[1]), atoi(argv[2]));
    printf("%d\n", c);
}
