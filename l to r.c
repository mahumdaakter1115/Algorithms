#include <stdio.h>

long long getSumRange(long long L, long long R) {

    if (L > R) {
        long long temp = L;
        L = R;
        R = temp;
    }


    long long n = R - L + 1;


    long long sum = (n * (L + R)) / 2;

    return sum;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        long long L, R;
        scanf("%lld %lld", &L, &R);

        long long sum = getSumRange(L, R);
        printf("%lld\n", sum);
    }

    return 0;
}
