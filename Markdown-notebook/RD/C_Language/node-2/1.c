//
// Created by SuperNu1L on 2022/4/27.
//
#include "stdio.h"
#include "include/function.h"
int main() {
    int m, n;
    scanf("%d%d", &m, &n);
    int swap, sum = 0, cnt = 0;
    for ((m < n ? m = m, n = n : (swap = m, m = n, n = swap)); m <= n; m++) {
        if (isPrime(m)) {
            printf("%d\t",m);
            sum += m;
            cnt++;
        }
    }
    return 0;
}


